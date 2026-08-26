# 🧠 Ruta de Aprendizaje de C — Curso Práctico

> **Objetivo:** aprender C desde cero hasta un nivel sólido de programación de sistemas, memoria, estructuras de datos y proyectos prácticos.
>
> **Entorno:** Linux + GCC + Visual Studio Code.
>
> **Metodología:** concepto → ejemplo → reto → revisión → checkpoint → proyecto.
>
> **Regla principal:** no avanzar solo por "terminar" temas. Un módulo se considera completado cuando existe comprensión práctica suficiente.

---

# 📊 Estado general

| Fase | Tema | Estado |
|---|---|---|
| 1 | Fundamentos de C | ✅ Completado |
| 2 | Funciones y modularización | ✅ Completado |
| 3 | Arrays y cadenas | ✅ Completado |
| 4 | Punteros | 🟢 En progreso |
| 5 | Memoria dinámica | ⬜ Pendiente |
| 6 | Structs y estructuras de datos | ⬜ Pendiente |
| 7 | Archivos | ⬜ Pendiente |
| 8 | C avanzado y sistemas | ⬜ Pendiente |

**Progreso orientativo:** Fase 1 completada (100%) — Fase 2 completada (100%) — Fase 3 completada (100%)

---

# 📚 Cómo usamos este documento

Cada sesión sigue este ciclo:

1. 🧠 Concepto
2. 💻 Ejemplo
3. 🔍 Explicación
4. 🧪 Reto
5. 🐛 Revisión del código
6. 📝 Checkpoint
7. 🏆 Proyecto o avance de módulo

### Estados

- ⬜ Pendiente
- 🟢 En progreso
- ✅ Completado
- 🔁 Repasar
- 🧭 Adelanto

---

# 🟢 FASE 1 — FUNDAMENTOS DE C

## Objetivo

Ser capaz de crear, compilar y ejecutar programas sencillos en C, utilizando variables, entrada/salida, operadores, condiciones y bucles.

---

## Módulo 1 — Entorno y primer programa

### Conceptos

- [x] Instalar GCC
- [x] Configurar VS Code
- [x] Terminal Linux
- [x] Compilar con `gcc`
- [x] Ejecutar programas con `./programa`
- [x] `#include`
- [x] `main()`
- [x] `return 0`
- [x] `printf()`
- [x] `\n`

### Ejercicios

- [x] Hola Mundo
- [x] Programa con varios `printf()`

### Checkpoint

- [x] Explicar qué hace `main()`
- [x] Explicar para qué sirve `#include <stdio.h>`
- [x] Compilar un programa manualmente
- [x] Ejecutarlo desde la terminal

**Estado:** ✅ Conceptos prácticos completados.

---

## Módulo 2 — Variables y tipos de datos

### Conceptos

- [x] Declaración de variables
- [x] Asignación
- [x] `int`
- [x] `float`
- [x] `double`
- [x] `char`
- [x] `char[]`
- [x] Strings/cadenas en C
- [x] `%d`
- [x] `%f`
- [x] `%c`
- [x] `%s`
- [x] `scanf()`

### Ejercicios

- [x] Programa de perfil personal
- [x] Edad
- [x] Altura
- [x] Peso
- [x] Año de nacimiento
- [x] Nombre e inicial

### Checkpoint

- [x] Elegir correctamente el tipo de dato para una variable
- [x] Explicar diferencia entre `char` y `char[]`
- [x] Utilizar correctamente `%d`, `%f`, `%c`, `%s`
- [x] Recibir datos mediante `scanf()`

**Estado:** ✅ Completado a nivel práctico.

---

## Módulo 3 — Operadores y conversiones

### Conceptos

- [x] Suma `+`
- [x] Resta `-`
- [x] Multiplicación `*`
- [x] División `/`
- [x] Módulo `%`
- [x] División entera
- [x] División decimal
- [x] Conversión de tipos
- [x] Casting
- [x] `(float)`

### Ejercicios

- [x] Calculadora de dos números enteros
- [x] Calculadora con números decimales
- [x] Diferencia entre división entera y decimal

### Checkpoint

- [x] Explicar por qué `10 / 3` puede producir `3`
- [x] Explicar qué hace `(float)`
- [x] Elegir tipos adecuados para una operación
- [x] Resolver operaciones con `int` y `float`

**Estado:** ✅ Completado a nivel práctico.

---

## Módulo 4 — Condicionales

### Conceptos

- [x] `if`
- [x] `else`
- [x] `else if`
- [x] `>`
- [x] `<`
- [x] `>=`
- [x] `<=`
- [x] `==`
- [x] `!=`
- [x] Diferencia entre `=` y `==`
- [x] Orden de evaluación de condiciones

### Ejercicios

- [x] Mayor o menor de edad
- [x] Clasificador de edades
- [x] Validación de edad negativa
- [x] Simplificación de condiciones
- [x] Sistema de autorización de entrada
- [x] Sistema de descuentos

### Checkpoint

- [x] Construir un `if/else` desde cero
- [x] Utilizar varios `else if`
- [x] Explicar `=` vs `==`
- [x] Ordenar condiciones correctamente
- [x] Simplificar condiciones sin cambiar el resultado

**Estado:** ✅ Completado a nivel práctico.

---

## Módulo 5 — Lógica booleana

**Estado actual:** ✅ Completado.

### Conceptos

- [x] `&&` — AND
- [x] `||` — OR
- [x] `!` — NOT
- [x] `bool`
- [x] `true`
- [x] `false`
- [x] `#include <stdbool.h>`
- [x] Valores `0` y `1`
- [x] Tablas de verdad
- [x] Combinación de condiciones
- [x] Negación de condiciones

### Ejercicios

- [x] Acceso con edad + autorización
- [x] Descuento por edad
- [x] Programa usando `!`
- [x] Programa usando `bool`
- [x] Condiciones combinadas
- [x] Ejercicios de tablas de verdad

### Checkpoint

- [x] Explicar `&&`
- [x] Explicar `||`
- [x] Explicar `!`
- [x] Explicar `0` y `1` como falso/verdadero
- [x] Utilizar `bool`
- [x] Resolver condiciones complejas sin ayuda

---

## Módulo 6 — `switch`

### Conceptos

- [x] `switch`
- [x] `case`
- [x] `break`
- [x] `default`
- [x] Cuándo utilizar `switch` vs `if/else`

### Ejercicios

- [x] Menú de opciones
- [x] Calculadora mediante `switch`
- [x] Menú interactivo

### Checkpoint

- [x] Crear un `switch` desde cero
- [x] Explicar `break`
- [x] Explicar `default`
- [x] Elegir entre `switch` e `if/else`

---

## Módulo 7 — Bucles

### Conceptos

- [x] `while`
- [x] `do while`
- [x] `for`
- [x] Contadores
- [x] Acumuladores
- [x] Bucles infinitos
- [x] `break`
- [x] `continue`
- [x] Bucles anidados

### Ejercicios

- [x] Contar del 1 al 10
- [x] Números pares
- [x] Tabla de multiplicar
- [x] Suma de números
- [x] Factorial
- [x] Menú repetitivo
- [x] Validación de entrada
- [x] Bucles anidados
- [x] Ejercicio 2 — Contador divisibles por 3 (`ej2_contador.c`)
- [x] Ejercicio 3 — Acumulador pares (`ej3_acumulador.c`)
- [x] Ejercicio 4 — Break con suma (`ej4_break.c`)
- [x] Ejercicio 5 — Continue sin divisibles por 3 (`ej5_continue.c`)
- [x] Ejercicio 6 — Notas con break (`ej6_integrado.c`)

### Checkpoint

- [x] Elegir entre `for`, `while` y `do while`
- [x] Crear un contador
- [x] Crear un acumulador
- [x] Utilizar `break`
- [x] Utilizar `continue`
- [x] Resolver un problema usando un bucle (ej6 pendiente)

---

## Módulo 8 — Proyecto integrador de Fase 1

### Proyecto: 🧮 Calculadora interactiva

Debe incluir:

- [x] Menú
- [x] Suma
- [x] Resta
- [x] Multiplicación
- [x] División
- [x] Validación de división por cero
- [x] Repetición del menú
- [x] Opción para salir
- [x] Entrada de datos
- [x] Condiciones
- [x] `switch`
- [x] Bucles

### Checkpoint Fase 1

- [x] Resolver un ejercicio sin asistencia
- [x] Explicar variables y tipos
- [x] Explicar operadores
- [x] Explicar `if/else`
- [x] Explicar operadores lógicos
- [x] Utilizar `switch`
- [x] Utilizar bucles
- [x] Completar proyecto integrador

**Estado:** ✅ Completado.

---

# 🔵 FASE 2 — FUNCIONES Y MODULARIZACIÓN

## Objetivo

Aprender a dividir programas grandes en funciones reutilizables y posteriormente en varios archivos.

## Módulo 1 — Funciones

- [x] Declaración
- [x] Definición
- [x] Llamada
- [x] Parámetros
- [x] `return`
- [x] Valor de retorno
- [x] Funciones `void`
- [x] Variables locales
- [x] Alcance/scope

### Ejercicios

- [x] Función suma
- [x] Función promedio
- [x] Función mayor de dos números
- [x] Funciones matemáticas
- [x] Calculadora mediante funciones

## Módulo 2 — Prototipos y modularización

- [x] Prototipos
- [x] Archivos `.c`
- [x] Archivos `.h`
- [x] `#include` propio
- [x] Compilación de varios archivos

## Proyecto

### 🧮 Calculadora modular

- [x] `main.c`
- [x] `operaciones.c`
- [x] `operaciones.h`
- [x] Menú
- [x] Funciones separadas

## Checkpoint Fase 2

- [x] Crear funciones
- [x] Pasar parámetros
- [x] Retornar valores
- [x] Separar código en archivos
- [x] Compilar varios archivos

---

# 🟣 FASE 3 — ARRAYS Y CADENAS

## Objetivo

Trabajar con colecciones de datos y texto.

## Módulo 1 — Arrays

- [x] Declaración
- [x] Índices
- [x] Recorrido
- [x] Modificación
- [x] Arrays de `int`
- [ ] Arrays de `float`
- [ ] Arrays multidimensionales

### Ejercicios

- [x] Promedio de notas
- [x] Mayor y menor
- [x] Buscar elemento
- [x] Contar elementos
- [x] Insertar en posición
- [x] Ordenamiento básico

## Módulo 2 — Strings

- [x] Strings como arrays de `char`
- [x] `\0`
- [x] `strlen`
- [x] `strcpy`
- [x] `strcmp`
- [x] `strcat`
- [x] Entrada de texto

### Ejercicios

- [x] Reto strings (`reto_strings.c`)

## Proyecto

### 📒 Agenda de contactos

- [x] Nombre
- [x] Teléfono
- [x] Búsqueda
- [x] Listado
- [x] Edición
- [x] Eliminación

## Checkpoint Fase 3

- [x] Recorrer arrays
- [x] Manipular strings
- [x] Buscar información
- [x] Ordenar datos
- [x] Crear un programa con arrays

---

# 🔴 FASE 4 — PUNTEROS

## Objetivo

Comprender direcciones de memoria y trabajar directamente con referencias a datos.

## Módulo 1 — Conceptos básicos

- [ ] Dirección de memoria
- [ ] Operador `&`
- [ ] Operador `*`
- [ ] Declaración de punteros
- [ ] Dereferenciación
- [ ] Punteros e `int`
- [ ] Punteros y `float`
- [ ] `scanf()` explicado mediante punteros

## Módulo 2 — Punteros y arrays

- [ ] Relación array/puntero
- [ ] Aritmética de punteros
- [ ] Recorrer arrays con punteros
- [ ] Strings y punteros

## Módulo 3 — Punteros y funciones

- [ ] Paso por referencia
- [ ] Modificar variables desde funciones
- [ ] Punteros como parámetros
- [ ] Punteros a funciones — introducción

## Proyecto

### 🔄 Biblioteca de operaciones mediante punteros

- [ ] Intercambio de variables
- [ ] Manipulación de arrays
- [ ] Funciones que modifican datos
- [ ] Menú

## Checkpoint Fase 4

- [ ] Explicar qué es una dirección
- [ ] Explicar `&`
- [ ] Explicar `*`
- [ ] Declarar y utilizar punteros
- [ ] Modificar una variable mediante un puntero
- [ ] Recorrer un array mediante punteros

---

# 🟠 FASE 5 — MEMORIA DINÁMICA

## Objetivo

Aprender a reservar y liberar memoria manualmente.

## Conceptos

- [ ] Stack
- [ ] Heap
- [ ] `malloc`
- [ ] `calloc`
- [ ] `realloc`
- [ ] `free`
- [ ] Memory leaks
- [ ] Dangling pointers
- [ ] NULL
- [ ] Validación de asignaciones

## Ejercicios

- [ ] Array dinámico
- [ ] Redimensionar array
- [ ] Liberar memoria
- [ ] Detectar fugas

## Proyecto

### 📋 Lista dinámica de registros

- [ ] Crear
- [ ] Agregar
- [ ] Eliminar
- [ ] Modificar
- [ ] Buscar
- [ ] Liberar memoria

## Checkpoint Fase 5

- [ ] Explicar stack vs heap
- [ ] Utilizar `malloc`
- [ ] Utilizar `realloc`
- [ ] Utilizar `free`
- [ ] Evitar memory leaks
- [ ] Manejar errores de memoria

---

# 🟡 FASE 6 — STRUCTS Y ESTRUCTURAS DE DATOS

## Objetivo

Crear tipos de datos propios y estructuras de datos.

## Módulo 1 — Structs

- [ ] `struct`
- [ ] Campos
- [ ] Acceso con `.`
- [ ] `typedef`
- [ ] Structs anidados
- [ ] Arrays de structs
- [ ] Punteros a structs
- [ ] `->`

## Módulo 2 — Listas enlazadas

- [ ] Nodo
- [ ] Lista
- [ ] Insertar
- [ ] Eliminar
- [ ] Buscar
- [ ] Recorrer

## Módulo 3 — Otras estructuras

- [ ] Pila
- [ ] Cola
- [ ] Árbol básico
- [ ] Tabla hash — introducción

## Proyecto

### 📦 Sistema de inventario

- [ ] Productos
- [ ] Código
- [ ] Nombre
- [ ] Precio
- [ ] Cantidad
- [ ] Agregar
- [ ] Buscar
- [ ] Modificar
- [ ] Eliminar
- [ ] Listar

## Checkpoint Fase 6

- [ ] Crear structs
- [ ] Usar arrays de structs
- [ ] Usar punteros a structs
- [ ] Implementar lista enlazada
- [ ] Implementar pila
- [ ] Implementar cola

---

# 🟤 FASE 7 — ARCHIVOS Y PERSISTENCIA

## Objetivo

Guardar y recuperar información desde archivos.

## Conceptos

- [ ] `FILE`
- [ ] `fopen`
- [ ] `fclose`
- [ ] `fprintf`
- [ ] `fscanf`
- [ ] `fgets`
- [ ] `fputs`
- [ ] `fread`
- [ ] `fwrite`
- [ ] Archivos de texto
- [ ] Archivos binarios
- [ ] Modos `r`, `w`, `a`
- [ ] Manejo de errores

## Proyecto

### 🗄️ Sistema de inventario persistente

Extender el proyecto anterior para:

- [ ] Guardar productos
- [ ] Cargar productos
- [ ] Actualizar datos
- [ ] Eliminar datos
- [ ] Mantener información después de cerrar el programa

## Checkpoint Fase 7

- [ ] Abrir archivos
- [ ] Leer archivos
- [ ] Escribir archivos
- [ ] Trabajar con archivos binarios
- [ ] Manejar errores
- [ ] Crear aplicación persistente

---

# ⚫ FASE 8 — C AVANZADO Y PROGRAMACIÓN DE SISTEMAS

## Objetivo

Pasar de programas básicos a conceptos de bajo nivel y sistemas.

## Módulo 1 — Preprocesador

- [ ] `#define`
- [ ] Macros
- [ ] Include guards
- [ ] Compilación condicional

## Módulo 2 — Bitwise

- [ ] `&`
- [ ] `|`
- [ ] `^`
- [ ] `~`
- [ ] `<<`
- [ ] `>>`
- [ ] Máscaras de bits

## Módulo 3 — Compilación

- [ ] Preprocesado
- [ ] Compilación
- [ ] Ensamblado
- [ ] Linking
- [ ] Object files
- [ ] `gcc` avanzado
- [ ] Flags

## Módulo 4 — Make

- [ ] Makefile
- [ ] Targets
- [ ] Dependencias
- [ ] Compilación incremental

## Módulo 5 — Debugging

- [ ] GDB
- [ ] Breakpoints
- [ ] Watch
- [ ] Stack
- [ ] Variables
- [ ] Backtrace

## Módulo 6 — Análisis de memoria

- [ ] Valgrind
- [ ] Memory leaks
- [ ] Invalid reads
- [ ] Invalid writes

## Módulo 7 — Sistemas Linux

- [ ] Procesos
- [ ] `fork`
- [ ] Señales
- [ ] Pipes
- [ ] File descriptors
- [ ] Sockets
- [ ] Threads

## Proyectos avanzados

- [ ] Shell de Linux sencilla
- [ ] Servidor HTTP básico
- [ ] Cliente TCP
- [ ] Sistema cliente-servidor
- [ ] Mini intérprete
- [ ] Programa multihilo

## Checkpoint Fase 8

- [ ] Utilizar GDB
- [ ] Utilizar Valgrind
- [ ] Crear Makefile
- [ ] Entender compilación y linking
- [ ] Trabajar con procesos
- [ ] Trabajar con sockets
- [ ] Trabajar con threads

---

# 🏆 PROYECTOS FINALES

Una vez terminadas las fases, seleccionar varios proyectos para consolidar conocimientos.

## Proyecto 1 — Sistema de inventario

**Conceptos:** structs, arrays, funciones, memoria y archivos.

Estado: ⬜

## Proyecto 2 — Agenda de contactos

**Conceptos:** strings, structs, búsqueda, archivos.

Estado: ⬜

## Proyecto 3 — Shell sencilla

**Conceptos:** Linux, procesos, comandos, memoria.

Estado: ⬜

## Proyecto 4 — Servidor HTTP básico

**Conceptos:** sockets, redes, archivos.

Estado: ⬜

## Proyecto 5 — Proyecto libre

Elegir un problema real y resolverlo en C.

Estado: ⬜

---

# 🧭 ADELANTOS

Podemos estudiar superficialmente temas de fases futuras si aparecen durante una clase.

> Un adelanto NO marca el módulo completo como terminado.

### Registro

- [x] Punteros — adelanto durante Fase 1
- [ ] Memoria — adelanto
- [ ] Structs — adelanto
- [ ] Linux/sistemas — adelanto
- [ ] Bitwise — adelanto
- [x] **Adelanto con grupo de estudio (agosto 2026):**
  - [x] Arreglos (`notas.c`)
  - [x] `sizeof` (`sizeof.c`)
  - [x] Funciones básicas y de retorno (`funciones.c`, `funciones2.c`)
  - [x] Funciones recursivas (`recursivo.c`)
  - [x] Apuntadores — conceptos básicos
  - [x] Apuntadores — llamadas por referencia
  - [x] Estructuras
  - [x] Arreglos de estructuras
  - [x] Estructuras anidadas
  - [x] Asignación dinámica de memoria
  - [x] Liberación de memoria dinámica
  - [ ] Listas enlazadas
  - [ ] Listas — agregar primer elemento
  - [ ] Listas — agregar elementos al final
  - [x] **Reto final: structs + malloc + free + acumulador** (`reto_final.c`)
  - [x] **Ejercicios Fase 3 Módulo 1:**
    - [x] Promedio de notas (`array_promedio.c`)
    - [x] Mayor y menor (`array_numeros.c`)
    - [x] Buscar elemento (`ej2_buscar.c`)
    - [x] Contar elementos (`ej1_parimpar.c`)
    - [x] Intercambiar posiciones (`ej4_intercambiarposiciones.c`)
    - [x] Insertar en posición (`ej5_desplazaderecha.c`)

---

# 🔁 REPASOS

Registrar aquí conceptos que necesiten reforzarse.

- [ ] Desplazamiento de arreglos hacia la derecha (bucle hacia atrás)
- [ ] Roles de parámetros en funciones con punteros (arreglo / contador / dato / índice)
- [ ] Método de 5 pasos para resolver ejercicios sin ayuda (examen: 4 de septiembre)
- [ ] Recorrer strings con `for` hasta `'\0'`
- [ ] Diferencia entre índice (`i`) y contenido (`sen[i]`, `arr[i]`)
- [ ] `isalnum()` de `<ctype.h>` — verificar si un carácter es alfanumérico
- [ ] `printf("%.*s", cantidad, puntero)` — imprimir subcadena
- [ ] Aritmética de punteros: `sen + posición` para desplazar un puntero
- [ ] Cerrar la última palabra después del `for` (el `'\0'` también es separador)

---

# 🐛 ERRORES IMPORTANTES APRENDIDOS

Registrar errores que hayan servido para entender conceptos.

### `scanf()`

Error:

```c
scanf("¿Cuál es tu edad? %d", &edad);
```

Aprendizaje:

- `printf()` muestra información.
- `scanf()` recibe datos.
- El formato de `scanf()` debe contener el especificador correspondiente.

### División entera

Error:

```c
int a = 10;
int b = 3;
float resultado;

resultado = a / b;
```

Aprendizaje:

`int / int` produce división entera antes de convertir el resultado.

Solución:

```c
resultado = (float)a / b;
```

### `=` vs `==`

- `=` → asignación
- `==` → comparación

### Actualización del `for` en el lugar equivocado

Error:

```c
for (int i = 1; i <= numero; suma++) {
    suma = suma + i;
}
```

Aprendizaje:

- `i` es el contador de vueltas → debe avanzar en la parte de actualización del `for` (`i++`).
- `suma` es el acumulador → debe actualizarse dentro del cuerpo (`suma = suma + i`).
- Si el contador nunca avanza, la condición nunca se vuelve falsa → **bucle infinito**.
- No usar la variable de entrada como acumulador: se destruye el dato del usuario.

Solución:

```c
for (int i = 1; i <= numero; i++) {
    suma = suma + i;
}
```

### Rangos y orden de condiciones

Aprendizaje:

Las condiciones de `if / else if / else` se evalúan de arriba hacia abajo. El orden puede permitir simplificar condiciones.

### Condiciones sin comparación

Error:

```c
for (int i = 0; tamaño - 1 ; i++)
```

Aprendizaje:

- Cualquier valor distinto de cero es verdadero → `tamaño - 1` siempre es verdad → **bucle infinito**.
- La condición de un bucle debe ser una comparación: `i < tamaño`.

Solución:

```c
for (int i = 0; i < tamaño ; i++)
```

### `printf()` sin formato

Error:

```c
printf(a, b);
printf(arreglo[i]);
```

Aprendizaje:

- El primer argumento de `printf()` es SIEMPRE texto entre comillas con los especificadores.
- Los valores van después, separados por comas.

Solución:

```c
printf("%d %d", a, b);
printf("%d ", arreglo[i]);
```

### Pasar valores donde se esperan punteros

Error:

```c
void swap(int *a, int *b) { ... }
swap(5, 3);      // números sueltos, sin dirección
swap(a, b);      // faltan las direcciones
```

Aprendizaje:

- Una función que recibe `int *` espera **direcciones de memoria**, no valores.
- Para obtener la dirección de una variable: operador `&` (el mismo de `scanf`).

Solución:

```c
swap(&a, &b);
```

### Números fijos vs parámetros

Error:

```c
void printArray(int arreglo[], int tamaño) {
    for (int i = 0; i < 5; i++)   // 5 escrito a mano
}
```

Aprendizaje:

Si el arreglo crece, la función seguirá imprimiendo solo 5 elementos. Usar el parámetro que la función ya recibe: `i < tamaño`.

### Función que promete devolver valor pero no tiene `return`

Error:

```c
int findLength(int* listSize) {
   // sin return
}
```

Aprendizaje:

- Una función que declara devolver `int` SIEMPRE debe terminar con `return`.
- Sin él, el programa entrega basura de memoria (se vio un número largo negativo en pantalla).
- C solo lanza warning, no error → compila pero el comportamiento es indefinido.

Solución:

```c
return *listSize;
```

### Roles intercambiados entre parámetros

Error:

```c
void insertAtEnd(int* listArray, int* listSize, int data) {
   listSize[data];                  // contador usado como arreglo, dato como índice
}
// y en insertAtBeginning:
listArray[i] = listArray[data];    // el dato usado como índice otra vez
```

Aprendizaje:

Cada parámetro tiene UN solo papel: `listArray` = arreglo, `listSize` = contador (con `*`), `data` = valor nuevo.

Frase guía: *"En el arreglo ___, en la casilla ___, guarda ___."*

### Bucle con condición imposible desde el inicio

Error:

```c
for (int i = 0; i > 0; i--)
```

Aprendizaje:

- `0 > 0` es falso en la primera evaluación → el cuerpo nunca se ejecuta.
- Antes de compilar, evaluar mentalmente la primera vuelta del bucle.
- El código debe reflejar la traza del papel: si el plan dice "empezar por la derecha", `i` debe iniciar en el extremo derecho (`*listSize`).

### Confundir `i` con `arr[i]`

Error:

```c
int arr[] = {50, 60, 70};
int i = 1;
// Pregunta: ¿cuánto vale i? → respuesta errónea: "60"
```

Aprendizaje:

- `i` es la **etiqueta de la casilla** → su valor sale de la declaración (`int i = 1;`), nunca del arreglo.
- `arr[i]` es el **contenido** de la casilla → se mira en la tabla del arreglo.
- `a = b` lee lo de la derecha y sobrescribe UNA sola casilla a la izquierda — una asignación no desplaza ni crea casillas.

### `isalnum(i)` en vez de `isalnum(sen[i])`

Error:

```c
if (isalnum(i))    // pasando el ÍNDICE, no el carácter
```

Aprendizaje:

- `isalnum()` recibe un **carácter**, no un índice.
- `i` es la posición (0, 1, 2...), `sen[i]` es el carácter en esa posición ('f', 'u', 'n'...).
- Siempre preguntar: *"¿qué le estoy pasando a la función?"*

### Inicializar `for` con contenido en vez de índice

Error:

```c
for (int i = *arr; i < size - 1; i++)  // *arr = 10 (contenido), no 0 (índice)
for (int i = sen; i < contador; i++)   // sen es puntero, no índice
```

Aprendizaje:

- `i` en un `for` es un **índice** → siempre empieza en 0 (o en un valor calculado).
- Nunca confundir el **contenido** (`*arr`, `arr[0]`) con el **índice** (`i = 0`).
- Antes de escribir el `for`, preguntar: *"¿desde dónde recorro? ¿hasta dónde?"*

### Comparación suelta sin `if`

Error:

```c
longitudActual > longitudMaxima;  // C evalúa y descarta — no hace nada
```

Aprendizaje:

- Una comparación sin `if` es **código muerto** — C la evalúa pero no la usa para nada.
- Si querés que algo pase cuando la comparación es verdadera, envolverla en `if`.

### `printf` sin formato específico para subcadenas

Error:

```c
printf("%s", sen);  // imprime TODO el string
```

Aprendizaje:

- `%s` imprime desde la posición hasta `'\0'`.
- Para imprimir **solo N caracteres desde una posición**: `printf("%.*s", cantidad, puntero_inicio)`.
- `sen + inicio` es **aritmética de punteros** — mueve el puntero `inicio` posiciones adelante.

---

# 📝 CHECKPOINTS REALIZADOS

## Checkpoint Fase 1 — Módulo 1

Estado: ✅ Realizado

## Checkpoint Fase 1 — Módulo 2

Estado: ✅ Realizado

## Checkpoint Fase 1 — Módulo 3

Estado: ✅ Realizado

## Checkpoint Fase 1 — Módulo 4

Estado: ✅ Realizado

## Checkpoint Fase 1 — Módulo 5

Estado: ✅ Realizado

## Checkpoint Fase 1 — Módulo 6

Estado: ✅ Realizado

## Checkpoint Fase 1 — Módulo 7

Estado: ✅ Realizado

## Checkpoint Fase 1 — Final

Estado: ✅ Realizado

## Checkpoint Fase 2 — Funciones y modularización

Estado: ✅ Realizado

## Checkpoint Fase 3 — Módulo 1: Arrays

Estado: ✅ Realizado

---

# 📈 REGISTRO DE SESIONES

## Sesión 1 — Fundamentos

- GCC instalado.
- VS Code configurado.
- Primer programa ejecutado.
- Variables y tipos.
- `printf`.
- `scanf`.
- Operadores.
- Condicionales.
- `&&`.
- `||`.

Estado: 🟢 Fase 1 / Módulo 5.

## Sesión 2 — `switch`

- `switch`, `case`, `break` y `default`.
- Calculadora mediante `switch` (`calcularswitch.c`).
- Menú interactivo con `switch` (`switch1.c`).
- Cuándo usar `switch` frente a `if/else`.

Estado: 🟢 Fase 1 / Módulo 6 completado.

## Sesión 3 — Bucles (Módulo 7)

- `while`, `for`, contadores y acumuladores.
- `contar10.c` (contar del 1 al 10 con `while`).
- `pares.c` (números pares del 2 al 20 con `for` y `contador += 2`).
- `suma.c` (suma del 1 hasta `n` con acumulador).
- Bug aprendido: actualizar el acumulador en lugar del contador en el `for` → bucle infinito.
- Error importante registrado en `# 🐛 ERRORES IMPORTANTES APRENDIDOS`.

Estado: 🟢 Fase 1 / Módulo 7 en progreso (3 de 8 ejercicios completados).

## Sesión 4 — Bucles (Módulo 7) + Adelantos

- `do while` — ciclo que ejecuta primero, verifica después (`do_while.c`).
- Bug corregido: `scanf("%c")` lee `\n` residual → solución: `" %c"`.
- `break` — salir de un bucle (`break.c`).
- `continue` — saltar una iteración (`continue.c`).
- Bucles anidados (`bucles_anidados.c`).
- Ejercicios del checkpoint: contador, acumulador, break, continue (`ej2` a `ej5`).
- Ejercicio 6 (notas con break) — pendiente para mañana.
- **Adelantos con grupo de estudio:**
  - Arreglos — declaración, índices, recorrido con `for` (`notas.c`).
  - `sizeof` — tamaño de tipos y arreglos, fórmula `sizeof(arr)/sizeof(arr[0])` (`sizeof.c`).
  - Funciones básicas — declaración, parámetros, `return`, `void` (`funciones.c`, `funciones2.c`).
  - Funciones recursivas — caso base, caso recursivo, suma del 1 al `n` (`recursivo.c`).

Estado: 🟢 Fase 1 / Módulo 7 casi completado (conceptos ✅, ejercicios pendientes: tabla de multiplicar, factorial, menú, validación, ej6). Adelantos: 4 de 14 temas completados.

## Sesión 5 — Módulo 7 completado + Checkpoint

- Ejercicio 6 — Notas con break (`ej6_integrado.c`) completado y corregido.
- Bugs corregidos: scope de `promedio`, inicialización de `contador`, división por cero.
- Checkpoint del Módulo 7: reto de contar positivos/negativos con `do while` y `break` (`ej7_positivos.c`).
- Módulo 7 completado. Pendiente: Módulo 8 (Calculadora interactiva).

Estado: ✅ Fase 1 / Módulo 7 completado.

## Sesión 6 — Adelanto: Punteros y Structs

- Punteros básicos: direcciones de memoria, operador `&`, operador `*`, declarar punteros, dereferenciación.
- Archivos: `punteros1.c`, `punteros2.c`, `punteros_reto.c` (intercambio de valores con punteros).
- Structs: `typedef struct`, acceso con `.`, punteros a structs con `->`.
- Arrays de structs: recorrido con `for`.
- `malloc` y `free`: memoria dinámica para arreglos de structs.
- Archivos: `structs1.c`, `structs_punteros.c`, `structs_reto.c`, `arrays_structs.c`, `malloc1.c`.
- Documento de referencia creado: `formato_printf_scanf.md`.
- Reto final pendiente: `reto_final.c` (structs + malloc + free + acumulador).

Estado: 🧭 Adelanto — Fase 4 (punteros), Fase 6 (structs), Fase 5 (malloc) vistos superficialmente.

## Sesión 7 — Reto final: structs + malloc + free

- Reto final completado (`reto_final.c`).
- Conceptos aplicados: `typedef struct`, `malloc`, `free`, acumulador, verificación de memoria.
- Bugs corregidos: variables incorrectas en acumulador (`precio` → `inventario[i].precio`).
- Checkpoint aprobado: comprensión de inicialización de acumuladores, manejo de `malloc` y `free`, memory leaks.

Estado: ✅ Reto final completado. Pendiente: Módulo 8 — Calculadora interactiva.

## Sesión 8 — Módulo 8: Calculadora interactiva (Proyecto integrador)

- Calculadora interactiva completada (`calculadora_interactiva.c`).
- Conceptos integrados: variables, operadores, `if/else`, `switch`, `do while`, `scanf`, `printf`.
- Bugs corregidos: validación de división por cero (verificar antes de dividir), fall-through en `switch`.
- Checkpoint Fase 1 aprobado.
- **FASE 1 COMPLETADA** ✅

Estado: ✅ Fase 1 completada. Próxima: Fase 2 — Funciones y modularización.

## Sesión 9 — Fase 2: Funciones y modularización

- Módulo 1 — Funciones: declaración, definición, llamada, parámetros, `return`, `void`, alcance.
- Ejercicios: `es_par.c`, `mayor.c`, `imprimir_nombre.c`, `calcular_area.c`, `calculadora_fun.c`.
- Concepto: paso por valor vs paso por referencia (punteros).
- Módulo 2 — Prototipos y modularización: prototipos, archivos `.h` y `.c`, `#include` propio, compilación de varios archivos.
- Proyecto: `matematicas/` con `matematicas.h`, `matematicas.c`, `main.c`.
- Checkpoint Fase 2 aprobado.
- **FASE 2 COMPLETADA** ✅

Estado: ✅ Fase 2 completada. Próxima: Fase 3 — Arrays y cadenas.

## Sesión 10 — Fase 3: Arrays (Módulo 1 en progreso)

- Arrays: declaración, inicialización, índices, recorrido con `for`.
- Bug aprendido: índices empiezan en 0, no en 1.
- Bug aprendido: `i+1` no modifica `i`, usar `i++`.
- Ejercicios: `array_promedio.c` (promedio de notas), `array_numeros.c` (mayor y menor).
- Pendiente: `array_comparando.c` (contar positivos/negativos/ceros).

Estado: 🟢 Fase 3 / Módulo 1 en progreso.

## Sesión 11 — Homework Etapa 1: tarea 1 completada + inicio tarea 2

- Revisión y cierre de `array_comparando.c` — contadores iniciados en 0 ✅
- Análisis del documento `Etapa 1 - Homework.docx` (2 retos).
- **Tarea 1 completada** (`tarea1.c`): funciones `swap`, `printArray`, `reverseArray` + `malloc`/`realloc`/`free`. Salida idéntica a la esperada 🏆
- Concepto nuevo dominado: `realloc` con puntero temporal para no perder la referencia.
- Algoritmos nuevos: inversión con fórmula `i ↔ tamaño-1-i`, desplazamiento (shift) hacia atrás/adelante.
- `#define MAX_SIZE` y distinción capacidad (`MAX_SIZE`) vs tamaño (`listSize`).
- Bugs aprendidos: primer argumento de `printf` siempre es formato entre comillas (3 apariciones), condiciones de bucle deben ser comparaciones, números fijos vs parámetros, `&` al llamar funciones que reciben punteros.
- Diagnóstico de refuerzo para examen registrado en perfil del estudiante (traza mental + checklist personal + simulacro).
- Tarea 2 iniciada: `initArrayList` en progreso (concepto de lista vacía = contador en 0).

Estado: 🟢 Fase 3 / Módulo 1 — homework Etapa 1 en progreso (continuar desde casa).

## Sesión 12 — Tarea 2: lista como ADT (arrays + punteros)

- `initArrayList` ✅ — escritura vía puntero (`*listSize = 0`).
- `findLength` ✅ — lectura vía puntero y `return`.
- `insertAtEnd` ✅ — concepto clave dominado: el índice del nuevo elemento al final = `*listSize`.
- `printArrayList` ✅ funcional (formato menor por pulir).
- Conceptos trabajados: error vs warning (`gcc -Wall`), función sin `return` devuelve basura, traza mental antes de ejecutar.
- Bug corregido: Copilot autocompletó `printArrayList` con flecha duplicada — reescrito a mano y Copilot desactivado.
- `insertAtBeginning` 🔶 al 90%: bucle hacia atrás correcto (`i = *listSize; i > 0; i--`), falta el cuerpo (`i - 1`) y el cierre (dato en índice 0 + incrementar contador).
- Pendientes: terminar tarea 2 (`insertAfterIndex`, `deleteAtIndex`), drills de refuerzo, simulacros para examen final.
- VS Code: pendiente instalar extensión WSL para análisis de errores con GCC desde Linux.

Estado: 🟢 Fase 3 / Módulo 1 — tarea 2 en progreso (4/7 funciones). Preparación examen final: 4 de septiembre.

## Sesión 13 — Traza mecánica: índice vs valor

- `insertAtBeginning` completada y verificada (con Copilot; comprensión reforzada después con drills).
- Confusión detectada y corregida: `i` vs `arr[i]`, dirección del `=`, una asignación sobrescribe UNA casilla.
- Plantilla de sustitución mecánica de 5 pasos dominada (último drill perfecto).
- Lección: "Length: 4" correcto por casualidad — funciones vacías pueden hacer pasar tests.
- Pendiente: programar `insertAfterIndex` sin Copilot, `deleteAtIndex`, pregunta puente línea 12.

Estado: 🟢 Fase 3 / Módulo 1 — tarea 2 en progreso (5/7 funciones).

## Sesión 14 — Tarea 2 completada: `insertAfterIndex` y `deleteAtIndex`

- `insertAfterIndex` completada tras 2 rondas de corrección.
- Bugs aprendidos: destino fijo que no viaja con `i` (`listArray[index+1] = listArray[i]`), condición del bucle sin el parámetro (`i > 0`, luego `i > 1`) y dato con número fijo (`listArray[3]`).
- Lección clave: **probar con un segundo índice** para verificar que funciona por la razón correcta, no por coincidencia (el test original engañaba: el 25 aparecía y Length daba 5).
- `deleteAtIndex` completada: bucle hacia adelante, corrimiento a la izquierda, `(*listSize)--`.
- Bug corregido: `listArray[i - index]` funcionaba solo con `index=1` → forma general `listArray[i-1]`.
- Concepto dominado: `index` decide **dónde empieza** el corrimiento; la aritmética interna siempre avanza de uno en uno.
- **TAREA 2 COMPLETADA** ✅ — 7/7 funciones verificadas con índices 0, 1 y 2.
- Creada guía imprimible para el examen: `guia_examen.md`.

Estado: ✅ Tarea 2 completada. Próximo: ejercicios Fase 3 Módulo 1 (buscar, contar, ordenar) + simulacros semanales para el examen del 4 de septiembre.

## Sesión 15 — Ejercicios de refuerzo: for + arrays + strings

- Autoevaluación de debilidades: bucles `for` y arreglos.
- Revisión del bug en `insertAfterIndex` de `tarea2.c` (acceso fuera de rango en `listArray[i+1]` cuando `i = *listSize`). Corregido a `i = *listSize - 1`.
- **Ejercicio 1** — Contar pares e impares (`ej1_parimpar.c`): módulo `%`, contadores, punteros. Completado sin ayuda ✅
- **Ejercicio 2** — Buscar elemento (`ej2_buscar.c`): `for` con `return` al encontrar. Concepto: `break` después de `return` es código muerto. Completado ✅
- **Reto CoderBite** — Longest Word (`coderbite_challege.c`):
  - Método de 5 pasos aplicado: traza en papel, tabla de roles, traducción a código.
  - Bugs corregidos: `isalnum(i)` → `isalnum(sen[i])`, `i = sen` (puntero) → `i = 0`, comparación suelta sin `if`.
  - Concepto dominado: `'\0'` como终止ador de string, recorrer strings con `for`.
  - Bug de última palabra: el `for` termina sin comparar la última → `if` después del `for`.
  - `printf("%.*s", longitudMaxima, sen + inicioMaxima)` — imprimir subcadena con cantidad y posición variable.
  - Concepto: `sen + inicioMaxima` es aritmética de punteros (puntero + desplazamiento).
- **Ejercicio 3** — Rotar izquierda (`ej3_rotacion.c`):
  - Corrimiento hacia la izquierda con variable temporal.
  - Bugs corregidos: `i = *arr` (contenido) → `i = 0` (índice), `temp` dentro del `for` → antes del `for`, cuerpo con líneas de más, `arr[6]` fuera de rango.
  - Concepto: la fórmula `arr[i] = arr[i+1]` porque el destino viaja con `i` y la fuente es siempre `i+1`.
  - Condición `i < size - 1` para no leer `arr[size]` (fuera de rango).
- Pendientes: ejercicios 4 (intercambiar posiciones) y 5 (insertar en posición).
- Carpeta `ejercicios_coderbyte/` creada con 7 retos de la plataforma. Plan de estudio: `primera_reversa`, `primer_factorial`, `emparejador_llaves`, `ValidacionNombre`.

Estado: 🟢 Fase 3 / Módulo 1 — ejercicios de refuerzo en progreso (3/5 completados + reto CoderBite).

## Sesión 16 — Ejercicio 4: Intercambiar posiciones

- Ejercicio 4 completado (`ej4_intercambiarposiciones.c`).
- Conceptos aplicados: intercambio con variable temporal, impresión de arrays con formato `[]`, paso de arrays por dirección (punteros).
- Bug corregido: impresión de comas — lógica de primer elemento vs resto.
- Checkpoint parcial: comprensión de por qué `arr` no necesita `&` al pasarse a funciones (ya es un puntero/dirección).
- **Ejercicios del Módulo 1 completados:** 4 de 5 (falta ordenamiento básico).

## Sesión 16 — Ejercicio 5: Insertar en posición

- Ejercicio 5 completado (`ej5_desplazaderecha.c`).
- Conceptos aplicados: desplazamiento hacia la derecha con bucle inverso, inserción en posición específica.
- Bugs corregidos:
  - `arr[i] = arr[i]` → `arr[i+1] = arr[i]` (copiar al destino correcto)
  - `(size)++` en la función → `(size)++` en `main` (pasado por valor, no por referencia)
  - `i > posicion` → `i >= posicion` (incluir la posición de inserción en el corrimiento)
- Lección clave: **ir de atrás hacia adelante para no sobrescribir datos antes de copiarlos**.

## Sesión 16 — Ejercicio 6: Ordenamiento básico (Bubble Sort)

- Ejercicio completado (`ordenamiento_basico.c`).
- Conceptos aplicados: bubble sort con dos bucles anidados, función `swap` con punteros.
- Bugs corregidos:
  - Ambos bucles usaban `i` → bucle interno cambió a `j` (shadowing)
  - `i <= size` → `j < size - 1 - i` (acceso fuera de rango + optimización)
  - `printArray` también tenía `i <= size` → corregido a `i < size`
- Lección clave: el bucle interno no revisa los últimos `i` elementos porque ya están ordenados.
- **Ejercicios del Módulo 1 completados: 6 de 6 ✅**

## Sesión 16 — Módulo 2: Strings

- Conceptos: strings como arrays de `char`, `\0`, `strlen`, `strcpy`, `strcmp`, `strcat`.
- Reto completado (`reto_strings.c`): nombre + ciudad, longitudes, comparación, copia.
- Bugs corregidos:
  - `\0` sin comillas → `'\0'`
  - `strcat` sin inicializar → primero `strcpy`, luego `strcat`
  - `strcmp` invertido → `0` significa iguales
- **Checkpoint Fase 3 completado ✅**

## Sesión 16 — Proyecto: Agenda de contactos

- Proyecto completado (`agenda_de_contactos.c`).
- Funciones implementadas: agregar, listar, buscar, editar, eliminar.
- Conceptos aplicados: arrays paralelos, strings, `strcmp`, `strcpy`, `strlen`, punteros (`int* total`).
- Lección clave: `(*total)++` para modificar el valor vs `*total++` que modifica el puntero.
- **FASE 3 COMPLETADA ✅**

Estado: ✅ Fase 3 completada. Próxima: Fase 4 — Punteros.

---

# 🎯 REGLAS DEL CURSO

1. Intentar resolver los retos antes de pedir la solución.
2. Los errores son parte del aprendizaje.
3. No avanzar automáticamente si un concepto fundamental no está claro.
4. Los checkpoints sirven para medir comprensión, no memoria.
5. Podemos hacer adelantos sin cambiar el orden oficial.
6. Cada fase debe terminar con al menos un proyecto.
7. El código debe ejecutarse realmente en Linux/GCC.
8. Siempre que sea posible, explicar primero el "por qué" y después la sintaxis.
9. Comparar con JavaScript solo cuando ayude a entender C.
10. Priorizar comprensión de memoria, tipos y comportamiento del lenguaje.

---

# 🏁 META FINAL

Al terminar esta ruta, el objetivo es que puedas:

- Escribir programas C desde cero.
- Compilar y depurar programas.
- Trabajar cómodamente en Linux.
- Comprender memoria y punteros.
- Gestionar memoria dinámicamente.
- Crear estructuras de datos.
- Trabajar con archivos.
- Crear programas modulares.
- Utilizar herramientas como GCC, GDB, Make y Valgrind.
- Crear programas que interactúen con Linux y redes.
- Leer y comprender código C de otros proyectos.
- Tener varios proyectos propios para continuar hacia sistemas, ciberseguridad, embedded, C++ u otras áreas.

---

# 📌 ESTADO ACTUAL

**Fase:** 4 — Punteros  
**Módulo:** 1 — Conceptos básicos  
**Próximo tema:** Direcciones de memoria, operador `&`, operador `*`, declaración de punteros  
**Próximo reto:** Entender direcciones y trabajar con punteros

**Último concepto dominado:** Agenda de contactos con arrays paralelos, strings, punteros para modificar `total`.

**Último ejercicio:** `agenda_de_contactos.c` — Proyecto integrador de Fase 3.

**Fases completadas:** Fase 1 ✅ — Fase 2 ✅ — Fase 3 ✅

**Examen final:** 4 de septiembre — posible tipo tarea2 o estilo CoderBite. Preparación: método de 5 pasos + ejercicios de refuerzo + simulacros semanales.

