# DesignPatternsFlyweight

O diagrama apresenta uma implementação do **padrão Flyweight (Peso-Mosca)** aplicada a objetos do tipo **Círculo** com objetivo de **reaproveitar instâncias e economizar memória**.

### **Descrição das classes e relações**

#### ✅ **Interface Shape**

* Representa o contrato para qualquer forma geométrica.
* Possui o método `draw()`, que deve ser implementado pelas classes concretas.

#### ✅ **Classe Circle**

* Implementa a interface `Shape`.
* Possui atributos intrínsecos e extrínsecos:

  * **Intrínseco** (armazenado no objeto e compartilhado):

    * `color : String` — a cor do círculo, usada como chave de identificação.
  * **Extrínsecos** (informações variáveis, definidas pelo cliente):

    * `x, y, radius : int` — posição e raio.
* Métodos:

  * setters para definir posição e raio (`setX()`, `setY()`, `setRadius()`)
  * implementação do método `draw()` para desenhar o círculo com os valores definidos.

> O padrão Flyweight atua sobre o **atributo de cor**, pois círculos da mesma cor são compartilhados.

---

#### ✅ **Classe ShapeFactory**

* Contém um `HashMap` chamado `circleMap`, onde:

  * Chave → cor do círculo
  * Valor → instância de `Circle`
* Método `getCircle(String color)`:

  * Verifica se já existe um círculo daquela cor no mapa.
  * **Se existir:** retorna o objeto existente.
  * **Se não existir:** cria um novo `Circle`, salva no mapa e o retorna.

> Essa classe é a responsável por garantir o reaproveitamento das instâncias.

---

#### ✅ **Classe FlyWeightPatternDemo**

* Classe responsável pela execução (`main()`).
* Solicita círculos para a `ShapeFactory` com diferentes cores.
* Define coordenadas e raio para cada uso.
* Demonstra na prática o reuso de objetos.

---

### 🔁 **Fluxo resumido**

1. O programa pede um círculo de determinada cor.
2. A `ShapeFactory` verifica o mapa:

   * Já existe? → retorna o mesmo objeto.
   * Não existe? → cria e armazena para futuras solicitações.
3. O programa ajusta posição/raio (dados extrínsecos) e chama `draw()`.

