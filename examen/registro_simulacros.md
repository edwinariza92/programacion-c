# 📋 Registro de Simulacros — Examen Etapa 1

---

## Simulacro 4 — Sesión tutor (2026-09-03 tarde)

**Ejercicio 1 — eliminarDuplicados** ✅ COMPLETADO (con tutor)
- Implementado siguiendo el método de 5 pasos: entender → roles → trazar → código → comparar
- Pasó los 4 tests (con duplicados, sin duplicados, todos duplicados, un solo elemento)
- Conceptos reforzados:
  - Diferencia `void` vs `Producto *` (retorno = tipo que recibe el main)
  - Por qué `capacidad` se ignora en este ejercicio (solo se reduce, no se agrega)
  - Búsqueda lineal con dos bucles (externo recorre original, interno busca en resultado)
  - Bandera `duplicado` + `break` comunicando entre bucles

**Pendiente:** ejercicios 2 (fusionar listas) y 3 (inventario binario) — para hacer en casa.

**Nuevo material de chuleta creado:**
- PÁGINA 2 — Método para problemas nuevos (lógica + 4 patrones: filtrar, fusionar, buscar/modificar, contar)
- PÁGINA 5 — Corregir código "desordenado" (5 cajas de bugs + método de traza + swap)
- PDF generado: `CHULETA_IMPRIMIR.pdf` + HTML `CHULETA_IMPRIMIR.html`

---

---

## Simulacro 1 — 2026-08-26

**Duración usada:** ~5 min (de 60 disponibles)
**Nota final:** 21/40 = **53%**

### Desglose por bloque

| Bloque | Máximo | Obtenido | % |
|---|---|---|---|
| MCQ (18 preguntas) | 18 | 7 | 39% |
| Código (longestword) | 14 | 12 | 86% |
| Cálculo (Round Robin) | 8 | 2 | 25% |

### MCQ — Errores por tema

| # | Tema | Error | Tipo |
|---|---|---|---|
| 1 | C - Operadores | Confundir `=` con `==` | Conceptual |
| 2 | C - Arrays | No detectar acceso fuera de rango | Lectura código |
| 3 | C - Funciones | Confundir paso por valor con referencia | Conceptual |
| 5 | C - Bucles | Leer salida incorrectamente del `while` | Lectura código |
| 6 | C - printf | Creer que `%s` necesita `&` | Conceptual |
| 7 | C - Operadores | No saber que `int/int` = división entera | Conceptual |
| 9 | Arq - Von Neumann | Confundir CPU con memoria principal | Conceptual |
| 12 | Arq - Pipelining | Confundir throughput con latencia | Conceptual |
| 13 | Arq - Pipelining | Confundir data hazard con resource hazard | Conceptual |
| 14 | SO - Estructuras | Confundir fork con system calls | Conceptual |
| 17 | SO - Planificación | Confundir FCFS con HRRN | Conceptual |

**Patrón:** 8 de 11 errores son conceptuales (confusión entre conceptos similares).

### Código — longestword.c

- **Algoritmo:** ✅ Correcto
- **Casos de prueba:** 7/7 pasados
- **Penalización:** printf en vez de return (no cumplió firma exacta)
- **Nota:** 12/14

### Cálculo — Round Robin (quantum=4)

- **Error principal:** No dibujó la línea de tiempo (Gantt) paso a paso
- **Turnaround/Promedio:** Calculados sin trazar → valores imposibles (P3=35 cuando solo hay 21 unidades de ejecución)
- **Respuesta correcta:** P1=21/13, P2=7/3, P3=15/6 | Prom T=14.33, Prom W=7.33
- **Nota:** 2/8

### Top 3 debilidades

1. **Conceptos C confundidos** — `=` vs `==`, paso por valor, división entera, `%s`
2. **Conceptos Arq/SO confundidos** — data/resource hazard, throughput/latencia, FCFS/HRRN, fork/system calls
3. **Cálculo sin línea de tiempo** — error recurrente en planificación de CPU

### Acciones concretas

- [x] Sesión tutor C: repasar Fase 1-2 (operadores, funciones, printf/scanf) — partially
- [ ] Sesión tutor Arq/SO: repasar diferencias entre conceptos similares
- [x] Práctica: 2-3 ejercicios de RR/FCFS/SPN dibujando Gantt siempre
- [ ] Nuevo simulacro en 3-4 días con foco en temas fallados

---

## Simulacro 2 — 2026-08-28

**Duración usada:** ~57 min (de 60 disponibles)
**Nota final:** 68.6/100

### Desglose por bloque

| Bloque | Máximo | Obtenido | % |
|---|---|---|---|
| MCQ (18 preguntas) | 18 | 13 | 72.2% |
| Código C (inventario structs+malloc) | 100 | 65 | 65% |

### MCQ — Respuestas

| # | Tu respuesta | Correcta | ¿Acertaste? |
|---|---|---|---|
| 1 | a | B | ❌ |
| 2 | c | C | ✅ |
| 3 | c | C | ✅ |
| 4 | a | B | ❌ |
| 5 | b | B | ✅ |
| 6 | b | B | ✅ |
| 7 | b | B | ✅ |
| 8 | b | B | ✅ |
| 9 | a | A | ✅ |
| 10 | c | B | ❌ |
| 11 | b | B | ✅ |
| 12 | b | B | ✅ |
| 13 | c | C | ✅ |
| 14 | d | B | ❌ |
| 15 | a | A | ✅ |
| 16 | a | B | ❌ |
| 17 | c | C | ✅ |
| 18 | b | B | ✅ |

### MCQ — Errores por tema

| # | Tema | Error | Tipo |
|---|---|---|---|
| 1 | Arq - Von Neumann | No recordar que datos e instrucciones comparten memoria | Conceptual |
| 4 | Arq - Pipelining | Confundir data hazard con resource hazard (otra vez) | Conceptual |
| 10 | SO - Memoria Virtual | Confundir page fault con error de estructura | Conceptual |
| 14 | C - Punteros | No reconocer `*(ptr + 1)` como segundo elemento | Lectura código |
| 16 | C - Operadores | Creer que `int/int` da decimal sin cast | Conceptual |

**Patrón:** 4 de 5 errores son conceptuales (confusión entre conceptos similares).

### Código — problema1_examen.c

- **Compilación:** ✅ Sin errores con `-Wall`
- **Struct:** ✅ Correcto
- **Firma función:** ✅ Correcta
- **realloc + temp:** ✅ Correcto
- **Verificación NULL:** ✅ Correcto
- **strcpy:** ✅ Correcto
- **Bug:** Línea 30 — `(*inventario)[i].cantidad = *cantidad` en vez de `cant`
- **Salida:** ❌ No coincide con la esperada
- **Liberar memoria:** ✅ Correcto
- **Nota:** 65/100

### Evolución vs Simulacro 1

| Métrica | Simulacro 1 | Simulacro 2 | Cambio |
|---|---|---|---|
| MCQ | 39% | **72.2%** | +33.2% 📈 |
| Código | 86% | **65%** | -21% 📉 |
| **Nota total** | **53%** | **68.6%** | **+15.6%** 📈 |

### Top 3 debilidades

1. **Bug de variable incorrecta en structs** — Confundir `*cantidad` (contador) con `cant` (dato del producto)
2. **Conceptos similares en Arq/SO** — data/resource hazard, page fault vs error de estructura, Von Neumann
3. **Aritmética de punteros** — `*(ptr + 1)` como acceso al segundo elemento

### Acciones concretas

- [x] Sesión tutor C: repasar Fase 1-2 (operadores, funciones, printf/scanf)
- [ ] Sesión tutor Arq/SO: repasar diferencias entre conceptos similares (Von Neumann, Pipelining, Memoria Virtual)
- [x] Práctica: ejercicios de planificación con Gantt
- [ ] Sesión tutor C: refuerzo structs + punteros + aritmética de punteros
- [ ] Nuevo simulacro en 3-4 días con foco en temas fallados

---

## Simulacro 3 — 2026-08-31

**Duración usada:** ~36 min (de 60 disponibles)
**Nota final:** 73/100

### Desglose por bloque

| Bloque | Máximo | Obtenido | % |
|---|---|---|---|
| MCQ (18 preguntas) | 45 | 37.5 | 83.3% |
| Código C (contactos structs+malloc) | 55 | 35.5 | 64.5% |

### MCQ — Registro de preguntas

| # | Pregunta (resumen) | Tu respuesta | Correcta | ¿Acertaste? |
|---|---|---|---|---|
| 1 | Cuello de botella Von Neumann | b | B | ✅ |
| 2 | Contenido del IR | b | B | ✅ |
| 3 | Característica de CISC | c | C | ✅ |
| 4 | Branch "tomado" en pipeline | a | B | ❌ |
| 5 | Función del DMA | c | C | ✅ |
| 6 | Contenido del PCB | b | B | ✅ |
| 7 | Modelo hilos uno-a-uno | b | B | ✅ |
| 8 | Efecto convoy (FCFS) | c | C | ✅ |
| 9 | Utilidad MLFQ | b | B | ✅ |
| 10 | Función registro base/límite | c | B | ❌ |
| 11 | Mejor vs primer ajuste | b | B | ✅ |
| 12 | Thrashing | c | C | ✅ |
| 13 | Contenido nodo-i | b | B | ✅ |
| 14 | Salida aritmética punteros `ptr=arr+2` | c | C | ✅ |
| 15 | Salida puntero doble `**pp=15` | c | C | ✅ |
| 16 | Bug modificar string literal | b | C | ❌ |
| 17 | Función `strcpy` | b | B | ✅ |
| 18 | Salida `p[3]` y `*(p+2)` | a | A | ✅ |

### MCQ — Errores por tema

| # | Tema | Error | Tipo |
|---|---|---|---|
| 4 | Arq - Pipelining | Branch "tomado" no descarta instrucciones del pipeline (flush/control hazard) | Conceptual |
| 10 | SO - Gestión Memoria | Confundir registro base/límite (protección) con MMU/tablas de páginas (traducción) | Conceptual |
| 16 | C - Strings | Modificar string literal con `[]` (creer que `[]` no sirve con punteros) | Conceptual |

**Patrón:** 3 de 3 errores son conceptuales (confusión entre mecanismos similares). El error de P16 ya estaba registrado en RUTA_C Sesión 20 pero volvió a fallar.

### Código — problema2_examen.c (contactos structs+malloc)

- **Compilación:** ✅ Sin errores con `-Wall`
- **Struct:** ✅ Correcto (Contacto con id, nombre, telefono, activo)
- **Firma función:** ✅ Correcta (Contacto **, *total, *capacidad, id, char[], char[])
- **realloc + temp:** ✅ Correcto
- **Verificación NULL:** ✅ Correcto
- **strcpy:** ✅ Correcto
- **Ejemplos:** ✅ Pasan (3 contactos, salida idéntica)
- **ASan:** ✅ Sin errores en la forma entregada
- **BUG (borde):** ❌ No soporta arrancar desde `capacidad = 0`. Si `main` empieza con NULL/0/0 (como pide el enunciado "sin conocer el tamaño"), `nuevaCapacidad = 0*2 = 0` → el 2º contacto escribe fuera de memoria (dato corrompido). Falta el caso `*capacidad == 0 → nuevaCapacidad = 1`.
- **Observación:** campo `activo` no se usa para filtrar en impresión (falta función eliminar).
- **Nota:** 64.5/100

### Evolución vs Simulacro 2

| Métrica | Simulacro 2 | Simulacro 3 | Cambio |
|---|---|---|---|
| MCQ | 72.2% | **83.3%** | +11.1% 📈 |
| Código | 65% | **64.5%** | -0.5% 📉 |
| **Nota total** | **68.6%** | **73%** | **+4.4%** 📈 |

### Top 3 debilidades

1. **Arranque desde capacidad 0** — patrón `*capacidad*2` falla si empieza en 0; bug nuevo recurrente de structs+malloc
2. **Control hazard / branch prediction** (pipeline) — falla otra vez (antes data/resource hazard)
3. **Registro base/límite vs MMU** — protección de memoria vs traducción de direcciones

### Acciones concretas

- [ ] Sesión tutor C: corregir patrón de arranque desde capacidad 0 en structs+malloc
- [ ] Sesión tutor Arq/SO: repasar pipeline (control hazard/branch) y gestión de memoria (base/límite vs MMU)
- [ ] Práctica: reescribir problema2 para que funcione desde NULL/0/0
- [ ] Nuevo simulacro en 3-4 días con foco en temas fallados

---

## Simulacro 4 — 2026-09-03 (Simulacro Completo — 4 horas)

**Duración usada:** 3h 8min (de 4 horas disponibles)
**Nota MCQ:** 41/50 = **82%**
**Código C:** Pendiente (con tutor después de almuerzo)

### Desglose por bloque

| Bloque | Máximo | Obtenido | % |
|---|---|---|---|
| MCQ (50 preguntas) | 50 | 41 | 82% |
| Código C (3 ejercicios) | — | Pendiente | — |

### MCQ — Registro de preguntas

| # | Pregunta (resumen) | Tu respuesta | Correcta | ¿Acertaste? |
|---|---|---|---|---|
| 1 | Característica fundamental Von Neumann | B | B | ✅ |
| 2 | Componente que coordina ejecución | B | B | ✅ |
| 3 | Cuello de botella Von Neumann | B | B | ✅ |
| 4 | ¿Qué almacena el Program Counter? | B | B | ✅ |
| 5 | Qué se obtiene en FETCH | B | B | ✅ |
| 6 | Qué componente modifica PC en salto | B | B | ✅ |
| 7 | Principal diferencia CISC vs RISC | D | A | ❌ |
| 8 | ARM es ejemplo de arquitectura | B | B | ✅ |
| 9 | Little Endian: cómo se guarda 0x12345678 | B | B | ✅ |
| 10 | Big Endian: byte más significativo en... | B | A | ❌ |
| 11 | Decodificar LE: 0x02,0x00,0x00,0x00 | B | A | ❌ |
| 12 | ¿Qué es un data hazard? | B | B | ✅ |
| 13 | Para qué sirve branch prediction | B | B | ✅ |
| 14 | Throughput pipeline 5 etapas | B | B | ✅ |
| 15 | ¿Qué es modo supervisor? | B | B | ✅ |
| 16 | Llamadas al sistema permiten... | B | B | ✅ |
| 17 | ¿Qué permite el DMA? | D | B | ❌ |
| 18 | Diferencia programa vs proceso | B | B | ✅ |
| 19 | ¿Qué sucede después de fork()? | B | A | ❌ |
| 20 | Proceso bloqueado porque... | B | B | ✅ |
| 21 | Recursos compartidos entre hilos | B | B | ✅ |
| 22 | Concurrencia vs paralelismo | B | B | ✅ |
| 23 | Flag para compilar con pthread | B | B | ✅ |
| 24 | Principal desventaja FCFS | B | B | ✅ |
| 25 | Round Robin quantum=4, ráfaga=10 | C | C | ✅ |
| 26 | Algoritmo minimiza waiting time | B | C | ❌ |
| 27 | Desempate en SPN misma ráfaga | B | B | ✅ |
| 28 | Mejor ajuste huecos [100,500,200,300,600] | A | A | ✅ |
| 29 | Fragmentación externa ocurre cuando... | A | A | ✅ |
| 30 | Siguiente ajuste comienza desde... | B | B | ✅ |
| 31 | Registro base y límite sirve para... | B | B | ✅ |
| 32 | ¿Qué es un page fault? | B | B | ✅ |
| 33 | Anomalía de Belady en FIFO | A | A | ✅ |
| 34 | ¿Qué es el TLB? | A | A | ✅ |
| 35 | ¿Qué es un nodo-i? | B | B | ✅ |
| 36 | ¿Qué contiene el MBR? | B | B | ✅ |
| 37 | Salida `*p + 5` con puntero | B | B | ✅ |
| 38 | Modificar `str[]` con puntero | B | B | ✅ |
| 39 | Intercambio con punteros y temp | B | B | ✅ |
| 40 | printf con malloc + strcpy + free | A | A | ✅ |
| 41 | Puntero desplazado `arr + 2` | C | C | ✅ |
| 42 | Función swap con punteros | A | A | ✅ |
| 43 | Puntero doble `**pp` | B | C | ❌ |
| 44 | strcmp con strings iguales | B | B | ✅ |
| 45 | Array de structs con malloc + strcpy | B | B | ✅ |
| 46 | Código sin free() al final | B | B | ✅ |
| 47 | `*(p+3)` y `*p` con aritmética | B | B | ✅ |
| 48 | strcpy + strcat concatenando | B | C | ❌ |
| 49 | Modificar string literal `char *msg` | A | C | ❌ |
| 50 | Dos punteros al mismo malloc | B | B | ✅ |

### MCQ — Errores por tema

| # | Tema | Error | Tipo |
|---|---|---|---|
| 7 | CISC vs RISC | Confundir dirección de registros con ciclos de ejecución (D al revés) | Conceptual |
| 10 | Big Endian | Confundir dirección baja con alta para byte más significativo | Conceptual |
| 11 | Little Endian | Decodificar bytes en orden incorrecto (usar fórmula Big Endian) | Cálculo |
| 17 | DMA | Confundir DMA con traducción de direcciones (procesos/memory) | Conceptual |
| 19 | Procesos | Creer que fork() destruye al padre (ambos continúan) | Conceptual |
| 26 | Planificación | Confundir Round Robin (justo) con SPN (minimiza waiting) | Conceptual |
| 43 | Código C | No desreferenciar `**pp` correctamente (puntero doble) | Lectura código |
| 48 | Código C | No acumular strcat (creer que sobrescribe) | Lectura código |
| 49 | Código C | Creer que string literal se puede modificar con `char *` | Conceptual |

**Patrón:** 7 de 9 errores son conceptuales (confusión entre conceptos similares o mecanismos). 2 son de lectura de código.

### Desglose por tema

| Tema | Preguntas | Correctas | Nota |
|---|---|---|---|
| Von Neumann | 3 | 3 | 100% |
| Ciclo de Instrucción | 3 | 3 | 100% |
| CISC vs RISC + Endian | 5 | 2 | **40%** ⚠️ |
| Pipelining | 3 | 3 | 100% |
| Estructuras de SO | 3 | 3 | 100% |
| Procesos | 3 | 2 | 67% |
| Hilos | 3 | 3 | 100% |
| Planificación de CPU | 4 | 3 | 75% |
| Gestión de Memoria | 4 | 4 | 100% |
| Memoria Virtual | 3 | 3 | 100% |
| Sistemas de Archivos | 2 | 2 | 100% |
| Código C | 14 | 11 | 79% |

### Evolución — Histórico completo

| Simulacro | Fecha | Duración | MCQ | Código | Nota total |
|---|---|---|---|---|---|
| Simulacro 1 | 2026-08-26 | 5 min | 39% | 86% | 53% |
| Simulacro 2 | 2026-08-28 | 57 min | 72.2% | 65% | 68.6% |
| Simulacro 3 | 2026-08-31 | 36 min | 83.3% | 64.5% | 73% |
| **Simulacro 4** | **2026-09-03** | **3h 8min** | **82%** | **Pendiente** | **82% (parcial)** |

### Top 3 debilidades

1. **CISC vs RISC + Endian (40%)** — Confusión sobre dirección de bytes (Big vs Little Endian), decodificación manual, diferencias entre arquitecturas
2. **Código C: punteros dobles y strings (79%)** — `**pp`, acumulación de `strcat`, string literals vs arrays
3. **Procesos / Planificación (67-75%)** — fork() no destruye padre, DMA permite E/S sin CPU, SPN minimiza waiting

### Acciones concretas

- [ ] Sesión tutor C: repasar punteros dobles (`**`), string literals vs arrays (`char *` vs `char[]`), strcat
- [ ] Sesión tutor Arq/SO: repasar Big/Little Endian (fórmula de decodificación, dirección de bytes), fork(), DMA, SPN vs Round Robin
- [ ] Completar los 3 ejercicios de código C pendientes (con tutor)
- [ ] Nuevo simulacro enfocado en CISC/RISC + Endian + código C antes del examen final
