#include <iostream>
#include <string>
#include <unordered_map>
#include <random>
#include <vector>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>

// Pequena utilitária para prints formatados no console
struct Console {
    static bool useColors() {
        return true; // altera para false se não quiser cores ANSI
    }

    static std::string timestamp() {
        auto now = std::chrono::system_clock::now();
        std::time_t t = std::chrono::system_clock::to_time_t(now);
        std::tm tm = *std::localtime(&t);
        std::ostringstream ss;
        ss << std::put_time(&tm, "%H:%M:%S");
        return ss.str();
    }

    static void info(const std::string& msg) {
        if (useColors()) std::cout << "\033[1;34m"; // azul
        std::cout << "[" << timestamp() << "] [INFO ] " << msg;
        if (useColors()) std::cout << "\033[0m";
        std::cout << std::endl;
    }

    static void warn(const std::string& msg) {
        if (useColors()) std::cout << "\033[1;33m"; // amarelo
        std::cout << "[" << timestamp() << "] [AVISO] " << msg;
        if (useColors()) std::cout << "\033[0m";
        std::cout << std::endl;
    }

    static void error(const std::string& msg) {
        if (useColors()) std::cout << "\033[1;31m"; // vermelho
        std::cout << "[" << timestamp() << "] [ERRO ] " << msg;
        if (useColors()) std::cout << "\033[0m";
        std::cout << std::endl;
    }
};

// Interface Shape
class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() = 0;
};

// Implementação concreta do Circle (Flyweight)
class Circle : public Shape {
private:
    std::string color;
    int x;
    int y;
    int radius;

public:
    Circle(const std::string& color) : color(color) {}

    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
    void setRadius(int radius) { this->radius = radius; }

    void draw() override {
        std::ostringstream ss;
          ss << "Círculo: Desenhar() [Cor: " << color
              << ", x: " << x
              << ", y: " << y
              << ", raio: " << radius << "]";
        Console::info(ss.str());
    }
};

// Factory para criar e gerenciar círculos
class ShapeFactory {
private:
    std::unordered_map<std::string, Circle*> circleMap;

public:
    ~ShapeFactory() {
        for (auto& pair : circleMap) {
            delete pair.second;
        }
    }

    Circle* getCircle(const std::string& color) {
        if (circleMap.find(color) == circleMap.end()) {
            circleMap[color] = new Circle(color);
            Console::info(std::string("Creating circle of color: ") + color);
        }
        return circleMap[color];
    }

    size_t size() const { return circleMap.size(); }
};

// Classe para demonstrar o uso do padrão
class FlyweightPatternDemo {
private:
    static std::string getRandomColor() {
        std::vector<std::string> colors = {"Vermelho", "Verde", "Azul", "Amarelo", "Branco"};
        return colors[rand() % colors.size()];
    }

    static int getRandomX() {
        return rand() % 100;
    }

    static int getRandomY() {
        return rand() % 100;
    }

public:
    static void main() {
        srand(time(nullptr));
        ShapeFactory* factory = new ShapeFactory();
    Console::info("--- DEMO DO PADRÃO FLYWEIGHT: INÍCIO ---");

        // Criando 20 círculos com propriedades aleatórias
        for(int i = 0; i < 20; ++i) {
            Circle* circle = factory->getCircle(getRandomColor());
            circle->setX(getRandomX());
            circle->setY(getRandomY());
            circle->setRadius(100);
            circle->draw();
        }
    Console::info(std::string("--- RESUMO: círculos únicos = ") + std::to_string(factory->size()));
    Console::info("--- DEMO DO PADRÃO FLYWEIGHT: FIM -----");

        delete factory;
    }
};

int main() {
    FlyweightPatternDemo::main();
    return 0;
}