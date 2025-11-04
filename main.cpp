#include <iostream>
#include <string>
#include <unordered_map>
#include <random>

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
        std::cout << "Circle: Draw() [Color: " << color 
                  << ", x: " << x 
                  << ", y: " << y 
                  << ", radius: " << radius << "]" << std::endl;
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
            std::cout << "Creating circle of color: " << color << std::endl;
        }
        return circleMap[color];
    }
};

// Classe para demonstrar o uso do padrão
class FlyweightPatternDemo {
private:
    static std::string getRandomColor() {
        std::vector<std::string> colors = {"Red", "Green", "Blue", "Yellow", "White"};
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

        // Criando 20 círculos com propriedades aleatórias
        for(int i = 0; i < 20; ++i) {
            Circle* circle = factory->getCircle(getRandomColor());
            circle->setX(getRandomX());
            circle->setY(getRandomY());
            circle->setRadius(100);
            circle->draw();
        }

        delete factory;
    }
};

int main() {
    FlyweightPatternDemo::main();
    return 0;
}