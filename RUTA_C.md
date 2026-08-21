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
| 3 | Arrays y cadenas | 🟢 En progreso |
| 4 | Punteros | ⬜ Pendiente |
| 5 | Memoria dinámica | ⬜ Pendiente |
| 6 | Structs y estructuras de datos | ⬜ Pendiente |
| 7 | Archivos | ⬜ Pendiente |
| 8 | C avanzado y sistemas | ⬜ Pendiente |

**Progreso orientativo:** Fase 1 completada (100%) — Fase 2 completada (100%) — Fase 3 en progreso (0%)

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

- [ ] Declaración
- [ ] Índices
- [ ] Recorrido
- [ ] Modificación
- [ ] Arrays de `int`
- [ ] Arrays de `float`
- [ ] Arrays multidimensionales

### Ejercicios

- [ ] Promedio de notas
- [ ] Mayor y menor
- [ ] Buscar elemento
- [ ] Contar elementos
- [ ] Ordenamiento básico

## Módulo 2 — Strings

- [ ] Strings como arrays de `char`
- [ ] `\0`
- [ ] `strlen`
- [ ] `strcpy`
- [ ] `strcmp`
- [ ] `strcat`
- [ ] Entrada de texto

## Proyecto

### 📒 Agenda de contactos

- [ ] Nombre
- [ ] Teléfono
- [ ] Búsqueda
- [ ] Listado
- [ ] Edición
- [ ] Eliminación

## Checkpoint Fase 3

- [ ] Recorrer arrays
- [ ] Manipular strings
- [ ] Buscar información
- [ ] Ordenar datos
- [ ] Crear un programa con arrays

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
  - [ ] Estructuras anidadas
  - [x] Asignación dinámica de memoria
  - [x] Liberación de memoria dinámica
  - [ ] Listas enlazadas
  - [ ] Listas — agregar primer elemento
  - [ ] Listas — agregar elementos al final
  - [x] **Reto final: structs + malloc + free + acumulador** (`reto_final.c`)

---

# 🔁 REPASOS

Registrar aquí conceptos que necesiten reforzarse.

- [ ] 
- [ ] 
- [ ] 

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

**Fase:** 3 — Arrays y cadenas  
**Módulo:** 1 — Arrays  
**Próximo tema:** Tarea 2 del homework — funciones `initArrayList`, `insertAtEnd` y luego las de desplazamiento (`insertAtBeginning`, `deleteAtIndex`, `insertAfterIndex`)  
**Próximo reto:** Completar `initArrayList` (una línea: contador en 0) e implementar `insertAtEnd` (validar llena → insertar → incrementar `*listSize`)

**Último concepto dominado:** `realloc`, inversión de arreglos con dos índices, desplazamiento de elementos (shift), capacidad vs tamaño.

**Último ejercicio:** `tarea1.c` — completada ✅ (swap + reverseArray + printArray con memoria dinámica).

**Fases completadas:** Fase 1 ✅ — Fase 2 ✅

