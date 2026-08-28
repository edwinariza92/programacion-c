# 📋 Registro de Simulacros — Examen Etapa 1

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
