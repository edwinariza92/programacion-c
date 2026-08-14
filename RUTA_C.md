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
| 1 | Fundamentos de C | 🟢 En progreso |
| 2 | Funciones y modularización | ⬜ Pendiente |
| 3 | Arrays y cadenas | ⬜ Pendiente |
| 4 | Punteros | ⬜ Pendiente |
| 5 | Memoria dinámica | ⬜ Pendiente |
| 6 | Structs y estructuras de datos | ⬜ Pendiente |
| 7 | Archivos | ⬜ Pendiente |
| 8 | C avanzado y sistemas | ⬜ Pendiente |

**Progreso orientativo:** Fase 1 — ~75%

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

- [ ] `while`
- [ ] `do while`
- [ ] `for`
- [ ] Contadores
- [ ] Acumuladores
- [ ] Bucles infinitos
- [ ] `break`
- [ ] `continue`
- [ ] Bucles anidados

### Ejercicios

- [ ] Contar del 1 al 10
- [ ] Números pares
- [ ] Tabla de multiplicar
- [ ] Suma de números
- [ ] Factorial
- [ ] Menú repetitivo
- [ ] Validación de entrada
- [ ] Bucles anidados

### Checkpoint

- [ ] Elegir entre `for`, `while` y `do while`
- [ ] Crear un contador
- [ ] Crear un acumulador
- [ ] Utilizar `break`
- [ ] Utilizar `continue`
- [ ] Resolver un problema usando un bucle

---

## Módulo 8 — Proyecto integrador de Fase 1

### Proyecto: 🧮 Calculadora interactiva

Debe incluir:

- [ ] Menú
- [ ] Suma
- [ ] Resta
- [ ] Multiplicación
- [ ] División
- [ ] Validación de división por cero
- [ ] Repetición del menú
- [ ] Opción para salir
- [ ] Entrada de datos
- [ ] Condiciones
- [ ] `switch`
- [ ] Bucles

### Checkpoint Fase 1

- [ ] Resolver un ejercicio sin asistencia
- [ ] Explicar variables y tipos
- [ ] Explicar operadores
- [ ] Explicar `if/else`
- [ ] Explicar operadores lógicos
- [ ] Utilizar `switch`
- [ ] Utilizar bucles
- [ ] Completar proyecto integrador

**Estado:** ⬜ Pendiente.

---

# 🔵 FASE 2 — FUNCIONES Y MODULARIZACIÓN

## Objetivo

Aprender a dividir programas grandes en funciones reutilizables y posteriormente en varios archivos.

## Módulo 1 — Funciones

- [ ] Declaración
- [ ] Definición
- [ ] Llamada
- [ ] Parámetros
- [ ] `return`
- [ ] Valor de retorno
- [ ] Funciones `void`
- [ ] Variables locales
- [ ] Alcance/scope

### Ejercicios

- [ ] Función suma
- [ ] Función promedio
- [ ] Función mayor de dos números
- [ ] Funciones matemáticas
- [ ] Calculadora mediante funciones

## Módulo 2 — Prototipos y modularización

- [ ] Prototipos
- [ ] Archivos `.c`
- [ ] Archivos `.h`
- [ ] `#include` propio
- [ ] Compilación de varios archivos

## Proyecto

### 🧮 Calculadora modular

- [ ] `main.c`
- [ ] `operaciones.c`
- [ ] `operaciones.h`
- [ ] Menú
- [ ] Funciones separadas

## Checkpoint Fase 2

- [ ] Crear funciones
- [ ] Pasar parámetros
- [ ] Retornar valores
- [ ] Separar código en archivos
- [ ] Compilar varios archivos

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

- [ ] Punteros — adelanto durante Fase 1
- [ ] Memoria — adelanto
- [ ] Structs — adelanto
- [ ] Linux/sistemas — adelanto
- [ ] Bitwise — adelanto

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

### Rangos y orden de condiciones

Aprendizaje:

Las condiciones de `if / else if / else` se evalúan de arriba hacia abajo. El orden puede permitir simplificar condiciones.

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

Estado: ⬜ Pendiente

## Checkpoint Fase 1 — Final

Estado: ⬜ Pendiente

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

## Sesión 3

Pendiente.

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

**Fase:** 1 — Fundamentos  
**Módulo:** 7 — Bucles  
**Próximo tema:** `while`, `for` y `do while`  
**Próximo reto:** contar del 1 al 10 con un bucle

**Último concepto dominado:** `switch`.

**Último ejercicio:** calculadora mediante `switch`.

