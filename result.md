# Resultado da Execução do Padrão Flyweight


@Thiagoff-IT ➜ /workspaces/DesignPatternsFlyweight (main) $ g++ -std=c++17 -Wall main.cpp -o main

@Thiagoff-IT ➜ /workspaces/DesignPatternsFlyweight (main) $ ./main

## 📋 Descrição[22:09:38] [INFO ] --- DEMO DO PADRÃO FLYWEIGHT: INÍCIO ---

[22:09:38] [INFO ] Creating circle of color: Amarelo

Demonstração prática do **padrão de design Flyweight** em C++. O padrão compartilha objetos para reduzir consumo de memória quando múltiplas instâncias com estado intrínseco comum são necessárias.[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Amarelo, x: 20, y: 16, raio: 100]

[22:09:38] [INFO ] Creating circle of color: Branco

---[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 52, y: 61, raio: 100]

[22:09:38] [INFO ] Creating circle of color: Vermelho

## 🚀 Como Reproduzir[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Vermelho, x: 46, y: 35, raio: 100]

[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Amarelo, x: 14, y: 1, raio: 100]

No diretório do projeto, compile e execute:[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 52, y: 78, raio: 100]

[22:09:38] [INFO ] Creating circle of color: Azul

```bash[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Azul, x: 39, y: 18, raio: 100]

g++ -std=c++17 -Wall main.cpp -o main[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Azul, x: 62, y: 33, raio: 100]

./main[22:09:38] [INFO ] Creating circle of color: Verde

```[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Verde, x: 52, y: 84, raio: 100]

[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Verde, x: 37, y: 9, raio: 100]

**Requisitos**: C++17 ou superior, `g++` instalado.[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 32, y: 16, raio: 100]

[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 48, y: 88, raio: 100]

---[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Azul, x: 62, y: 92, raio: 100]

[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 92, y: 38, raio: 100]

## 📤 Saída do Console[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 7, y: 4, raio: 100]

[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Amarelo, x: 1, y: 56, raio: 100]

```[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Amarelo, x: 40, y: 47, raio: 100]

@Thiagoff-IT ➜ /workspaces/DesignPatternsFlyweight (main) $ g++ -std=c++17 -Wall main.cpp -o main[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Amarelo, x: 38, y: 62, raio: 100]

@Thiagoff-IT ➜ /workspaces/DesignPatternsFlyweight (main) $ ./main[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Verde, x: 24, y: 14, raio: 100]

[22:09:38] [INFO ] --- DEMO DO PADRÃO FLYWEIGHT: INÍCIO ---[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Amarelo, x: 70, y: 3, raio: 100]

[22:09:38] [INFO ] Creating circle of color: Amarelo[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 44, y: 88, raio: 100]

[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Amarelo, x: 20, y: 16, raio: 100][22:09:38] [INFO ] --- RESUMO: círculos únicos = 5

[22:09:38] [INFO ] Creating circle of color: Branco[22:09:38] [INFO ] --- DEMO DO PADRÃO FLYWEIGHT: FIM -----
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 52, y: 61, raio: 100]
[22:09:38] [INFO ] Creating circle of color: Vermelho
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Vermelho, x: 46, y: 35, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Amarelo, x: 14, y: 1, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 52, y: 78, raio: 100]
[22:09:38] [INFO ] Creating circle of color: Azul
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Azul, x: 39, y: 18, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Azul, x: 62, y: 33, raio: 100]
[22:09:38] [INFO ] Creating circle of color: Verde
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Verde, x: 52, y: 84, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Verde, x: 37, y: 9, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 32, y: 16, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 48, y: 88, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Azul, x: 62, y: 92, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 92, y: 38, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 7, y: 4, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Amarelo, x: 1, y: 56, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Amarelo, x: 40, y: 47, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Amarelo, x: 38, y: 62, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Verde, x: 24, y: 14, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Amarelo, x: 70, y: 3, raio: 100]
[22:09:38] [INFO ] Círculo: Desenhar() [Cor: Branco, x: 44, y: 88, raio: 100]
[22:09:38] [INFO ] --- RESUMO: círculos únicos = 5
[22:09:38] [INFO ] --- DEMO DO PADRÃO FLYWEIGHT: FIM -----
```

---

## ✅ Análise do Resultado

### Métrica Principal
- **Círculos únicos criados**: **5** (Amarelo, Branco, Vermelho, Azul, Verde)
- **Total de chamadas Desenhar()**: **20**
- **Economia de memória**: 75% (apenas 5 objetos para 20 operações)

### O que Observar

1. **Criação de Flyweights**
   - Mensagens `Creating circle of color: ...` aparecem apenas **5 vezes**
   - Uma por cada cor única

2. **Reuso de Objetos**
   - Depois que um círculo é criado, a mesma instância é reutilizada
   - Coordenadas `(x, y)` mudam, mas o objeto base (cor) é o mesmo

3. **Estado Intrínseco vs. Extrínseco**
   - **Intrínseco** (compartilhado): cor do círculo
   - **Extrínseco** (específico de cada desenho): posição (x, y) e raio

---

## 💡 Por Que Funciona?

O padrão Flyweight economiza memória separando:
- **Estado compartilhável** (mantido internamente): cor
- **Estado específico** (passado externamente): posição, raio

Em vez de 20 objetos idênticos em cor, mantemos apenas 5 referenciados múltiplas vezes.

---

## 📌 Conclusão

A demonstração prova que o padrão Flyweight reduziu o consumo de memória em **75%**, criando apenas 5 objetos Circle em vez de 20, enquanto renderizava os 20 desenhos com sucesso.
