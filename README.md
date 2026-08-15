# Task #1: TDA, copia y movimiento

**course:** Programación III  
**unit:** Fundamentos  
**cmake project:** `prog3_fundamentos_task_1_v2026_2`

## Entrega

Responda cada pregunta en `include/p<n>.h` y, cuando corresponda, en `src/p<n>.cpp`.

## Question #1 - IntStack y copia profunda (0.7 points)

El código base ya incluye `push`, `pop` y `top`. Complete constructor, destructor y constructor de copia. Una copia debe tener un arreglo propio.

**Unit test (copia independiente):**
```cpp
IntStack source(3); source.push(10); source.push(20);
IntStack copy(source); copy.pop(); copy.push(99);
REQUIRE(source.top() == 20); REQUIRE(copy.top() == 99);
```

## Question #2 - GradeBook y asignación por copia (0.7 points)

Con constructor, destructor y constructor de copia ya dados, implemente solo el operador de asignación. Debe soportar `a = a`.

**Unit test (autoasignación):**
```cpp
GradeBook book(2); book.at(0) = 13; book.at(1) = 17;
book = book;
REQUIRE(book.at(0) == 13); REQUIRE(book.at(1) == 17);
```

## Question #3 - IntBuffer con crecimiento (0.7 points)

El constructor y destructor están dados. Implemente `resize` y `pushBack`. Cuando se llene el arreglo, duplique su capacidad y copie los enteros.

**Unit test (crecimiento):**
```cpp
IntBuffer buffer(1); buffer.pushBack(1); buffer.pushBack(2);
REQUIRE(buffer.size() == 2); REQUIRE(buffer.at(0) == 1);
```

## Question #4 - CircularQueue y orden lógico (0.7 points)

Las operaciones de cola ya están dadas. Implemente solo el constructor de copia; preserve el orden de salida aunque `front_` no sea cero.

**Unit test (cola rotada):**
```cpp
CircularQueue source(3); source.enqueue(1); source.enqueue(2); source.enqueue(3);
source.dequeue(); source.enqueue(4); CircularQueue copy(source);
REQUIRE(copy.dequeue() == 2); REQUIRE(copy.dequeue() == 3); REQUIRE(copy.dequeue() == 4);
```

## Question #5 - Name y copia de char* (0.7 points)

El constructor, destructor y `duplicate` están dados. Implemente únicamente el constructor de copia para un nombre almacenado en un único `char*`.

**Unit test (copia profunda):**
```cpp
Name source("Ana"); Name copy(source); copy.setFirst('L');
REQUIRE(std::strcmp(source.cStr(), "Ana") == 0);
REQUIRE(std::strcmp(copy.cStr(), "Lna") == 0);
```

## Question #6 - AttendanceRecord y asignación encadenada (0.7 points)

El constructor, destructor y copia están dados. Implemente el operador de asignación para que `third = second = first` funcione.

**Unit test (asignación encadenada):**
```cpp
AttendanceRecord first(2), second(2), third(2); first.mark(1, true);
third = second = first;
REQUIRE(second.isPresent(1)); REQUIRE(third.isPresent(1));
```

## Question #7 - Text y movimiento (1.0 points)

El constructor, destructor y operaciones de copia están dados. Implemente las dos operaciones de movimiento para transferir el puntero y dejar el origen vacío y válido. Relacione esos cinco miembros con la regla de cinco.

**Unit test (constructor de movimiento):**
```cpp
Text source("UTEC"); Text moved(std::move(source));
REQUIRE(std::strcmp(moved.cStr(), "UTEC") == 0); REQUIRE(source.empty());
```

## Question #8 - IntMatrix y swap (1.0 points)

El constructor, destructor y copia ya están dados. Implemente `swap`, el constructor de movimiento y la asignación por movimiento.

**Unit test (asignación por movimiento):**
```cpp
IntMatrix source(2, 3), target(1, 1); target = std::move(source);
REQUIRE(target.rows() == 2); REQUIRE(target.columns() == 3); REQUIRE(source.rows() == 0);
```

## Question #9 - Polynomial y retorno por valor (1.0 points)

El manejo del arreglo ya está implementado. Programe `derivative`, que crea y devuelve un nuevo polinomio sin modificar el objeto original.

**Unit test (derivada cuadrática):**
```cpp
Polynomial source(2); source.coefficient(0)=1; source.coefficient(1)=2; source.coefficient(2)=3;
Polynomial derived = source.derivative();
REQUIRE(source.evaluate(2) == 17); REQUIRE(derived.evaluate(2) == 14);
```

## Question #10 - GrayImage y objeto temporal (1.0 points)

El constructor, destructor y copia están dados. Implemente el constructor de movimiento, la asignación por movimiento e `inverted`.

**Unit test (inversión):**
```cpp
GrayImage source(1, 1); source.at(0, 0) = 10; GrayImage result = source.inverted();
REQUIRE(source.at(0, 0) == 10); REQUIRE(result.at(0, 0) == 245);
```

## Question #11 - ScoreList y movimiento explícito (1.0 points)

Con la regla de cinco ya implementada, agregue `makeSample`, que devuelve una lista por valor. Instrumente las operaciones de movimiento con un mensaje.

**Unit test (retorno por valor):**
```cpp
ScoreList scores = makeSample();
REQUIRE(scores.size() == 2);
```

## Question #12 - CourseRoster y copia segura (1.0 points)

El constructor, destructor y copia están dados. Implemente `swap` y la asignación por copia con una copia temporal.

**Unit test (asignación de vacío):**
```cpp
CourseRoster empty; CourseRoster copy(3); copy = empty;
REQUIRE(copy.size() == 0);
```

## Question #13 - History para lvalue y rvalue (1.7 points)

Use `Text` como elemento y un arreglo dinámico como almacenamiento. La regla de cinco y el crecimiento están dados; defina las dos sobrecargas de `add`.

**Unit test (lvalue y rvalue):**
```cpp
History history; Text message("start"); history.add(message); history.add(Text("stop"));
REQUIRE(history.size() == 2); REQUIRE(std::strcmp(history.at(0).cStr(), "start") == 0);
```

## Question #14 - TaskList y separación de resultados (1.7 points)

La regla de cinco, `add` y `complete` están dadas. Implemente `extractCompleted`: devuelve las terminadas y las elimina del original, preservando el orden.

**Unit test (extracción):**
```cpp
TaskList pending; pending.add(Text("code")); pending.add(Text("test")); pending.complete(1);
TaskList done = pending.extractCompleted();
REQUIRE(pending.size() == 1); REQUIRE(std::strcmp(done.at(0).title.cStr(), "test") == 0);
```

## Question #15 - TextList y realocación con movimiento (1.7 points)

La regla de cinco y la sobrecarga para lvalue están dadas. Implemente el crecimiento y `add(Text&&)`. Al crecer, traslade los elementos con `std::move`.

**Unit test (crecimiento con rvalues):**
```cpp
TextList list(1); list.add(Text("one")); list.add(Text("two")); list.add(Text("three"));
REQUIRE(list.size() == 3); REQUIRE(std::strcmp(list.at(2).cStr(), "three") == 0);
```

## Question #16 - AdjacencyMatrix y transposición (1.7 points)

Use un grafo dirigido pequeño con un arreglo dinámico de `bool`; el manejo del recurso está dado. Implemente `transposed`, que devuelve las aristas invertidas.

**Unit test (arista invertida):**
```cpp
AdjacencyMatrix graph(3); graph.connect(0, 2); AdjacencyMatrix transposed = graph.transposed();
REQUIRE(graph.connected(0, 2)); REQUIRE_FALSE(graph.connected(2, 0));
REQUIRE(transposed.connected(2, 0));
```

## Question #17 - FileBuffer como tipo solo movible (1.7 points)

Modele un búfer de bytes de propietario único. El constructor y destructor están dados; elimine las operaciones de copia e implemente las dos de movimiento. No realice lectura de archivos.

**Unit test (movimiento y fuente vacía):**
```cpp
static_assert(!std::is_copy_constructible_v<FileBuffer>);
FileBuffer source(128); FileBuffer target(std::move(source));
REQUIRE(target.size() == 128); REQUIRE(source.size() == 0);
```

## Question #18 - DocumentIndex y fusión por movimiento (1.3 points)

La regla de cinco y `add` están dados. Implemente `merge`, que toma un rvalue, crece solo si es necesario e incorpora sus entradas. El origen queda vacío y válido.

**Unit test (fusión):**
```cpp
DocumentIndex first, second; first.add(Text("cat")); second.add(Text("dog"));
first.merge(std::move(second));
REQUIRE(first.size() == 2); REQUIRE(second.size() == 0);
REQUIRE(std::strcmp(first.at(1).cStr(), "dog") == 0);
```

## Pruebas disponibles

Cada pregunta tiene cuatro pruebas en `autograder/tests/question_<n>/test_<m>/test_<m>.cpp`; las restantes cubren variantes, bordes y el comportamiento complementario del caso mostrado.

## Pruebas públicas en el IDE

Abra el proyecto con CMake en CLion o VS Code. Ejecute el objetivo de la pregunta que está implementando, por ejemplo `public_test_question_1`. El objetivo `public_tests_all` permite revisar todas las preguntas.

