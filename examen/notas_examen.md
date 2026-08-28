# 🎓 CHULETA DE EXAMEN — Etapa 1

> **Imprime esto (máx 4 páginas).** Lleva al examen del 4 de septiembre.
> Última actualización: 2026-08-28

---

## 🧭 MÉTODO DE 5 PASOS — SIEMPRE EN ORDEN

| # | Paso | ✔ |
|---|------|---|
| 1 | **Leer el `main` completo**: ¿qué recibe cada función? ¿qué debe imprimirse? | ☐ |
| 2 | **Tabla de roles**: ¿quién es arreglo, contador, dato, índice? | ☐ |
| 3 | **Traza en papel**: dibuja la tabla de casillas y ejecuta cada vuelta | ☐ |
| 4 | **Traducir a código**: una línea de traza = una línea de código | ☐ |
| 5 | **Compilar, correr y COMPARAR** la salida línea por línea con lo esperado | ☐ |

---

## 🔢 FÓRMULAS DE LISTAS (arreglos + punteros)

### Roles de parámetros

> *"En el arreglo **\_\_\_**, en la casilla **\_\_\_**, guarda **\_\_\_**."*

- Arreglo → `listArray`
- Contador (lleva `*`) → `*listSize`
- Dato nuevo → `data`
- Posición → `index` / `i`

### Los 4 patrones

| Operación | Corre hacia | Bucle | Cuerpo | Dato va a | Contador |
|---|---|---|---|---|---|
| Insertar al inicio | derecha | hacia atrás `i--` | `arr[i] = arr[i-1]` | `arr[0]` | `++` |
| Insertar después de index | derecha | hacia atrás, para en `i > index` | `arr[i+1] = arr[i]` | `arr[index+1]` | `++` |
| Eliminar en index | izquierda | hacia adelante desde `index+1` | `arr[i-1] = arr[i]` | *(no hay dato)* | `--` |
| Insertar al final | *(no corre)* | no hay bucle | — | `arr[*listSize]` | `++` |

### 3 reglas de oro

1. **El destino VIAJA con `i`** — si escribes siempre en la misma casilla, está mal.
2. **Cero números mágicos** — cada número literal: *"¿de dónde sales?"* → usa el parámetro.
3. **`index` decide DÓNDE empieza; la aritmética avanza de uno en uno.**

### Checklist anti-bug

- ☐ ¿El destino viaja con `i`?
- ☐ ¿Las condiciones son comparaciones con parámetros? (nada de `i < 5`)
- ☐ ¿El contador se actualiza? (+1 insertar, −1 borrar)
- ☐ ¿Probé con un **SEGUNDO índice** distinto?
- ☐ ¿Comparé salida LÍNEA POR LÍNEA?

---

## 🐛 ERRORES COMUNES EN C (aprendidos en simulacro)

### `=` vs `==`

```c
if (x = 10)    // ASIGNACIÓN → x vale 10, siempre true
if (x == 10)   // COMPARACIÓN → solo true si x ya era 10
```

### División entera

```c
int a = 10, b = 3;
a / b           // → 3 (NO 3.33) — int / int = int
(float)a / b   // → 3.33 — castear ANTES
```

### Paso por valor (no cambia la variable original)

```c
void duplicar(int n) { n = n * 2; }
int a = 5;
duplicar(a);    // a sigue siendo 5 — se copió el valor
```

### `%s` NO necesita `&`

```c
char nombre[] = "Hola";
printf("%s", nombre);    // ✅ correcto
printf("%s", &nombre);   // ❌ incorrecto
```

### Acceso fuera de rango

```c
int nums[] = {10, 20, 30};  // índices válidos: 0, 1, 2
nums[3]  // ❌ fuera de rango —sizeof(nums)/sizeof(nums[0]) = 3
```

### `scanf` necesita `&` (excepto `%s` y `%c` con truco)

```c
int x;
scanf("%d", &x);    // ✅ necesita &
char s[50];
scanf("%s", s);     // ✅ %s NO necesita &
```

### Aritmética de punteros — acceso a elementos

```c
int arr[] = {10, 20, 30};
int *ptr = arr;      // ptr apunta a arr[0]

*(ptr + 0)  // → 10 (arr[0])
*(ptr + 1)  // → 20 (arr[1])  ← ¡NO es dirección!
*(ptr + 2)  // → 30 (arr[2])

// ptr + n avanza n posiciones del TIPO apuntado (int = 4 bytes)
// *(ptr + n) es lo mismo que arr[n]
```

### Confundir parámetros con nombres similares

```c
void agregar(Producto **inv, int *cantidad, int id, int cant, ...) {
    (*inv)[i].cantidad = *cantidad;  // ❌ ERROR: *cantidad es el CONTADOR del array
    (*inv)[i].cantidad = cant;       // ✅ CORRECTO: cant es la cantidad del PRODUCTO
    
    // Regla: antes de cada asignación, preguntar:
    // "¿Este parámetro tiene el dato que necesito?"
}
```

---

## 🖥️ ARQUITECTURA Y SO — DIFERENCIAS QUE CONFUNDO

### Data Hazard vs Resource Hazard (Pipelining)

| Tipo | Qué pasa | Ejemplo |
|---|---|---|
| **Data hazard** | Una instrucción necesita el **resultado de otra** que aún no está listo | `R1 = R2 + R3` antes de que `R2` se escriba |
| **Resource hazard** | Dos instrucciones necesitan la **misma etapa** al mismo tiempo | Dos `IF` en el mismo ciclo |

### Throughput vs Latencia

| Concepto | Significado |
|---|---|
| **Throughput** | Instrucciones completadas **por unidad de tiempo** |
| **Latencia** | Tiempo que tarda **una sola instrucción** en completarse |

### Fork vs System Calls

| Mecanismo | Para qué sirve |
|---|---|
| **`fork()`** | Crear un **nuevo proceso** (copia del actual) |
| **System calls** | Mecanismo general para que un proceso **solicite servicios del kernel** (lectura de archivos, creación de procesos, etc.) |

### FCFS vs HRRN vs SPN

| Algoritmo | Tipo | Criterio |
|---|---|---|
| **FCFS** | No expropiativo | El que **llegó primero** se ejecuta primero |
| **HRRN** | No expropiativo | El de **mayor ratio** (espera + ráfaga)/ráfaga |
| **SPN** | Expropiativo* | El de **menor ráfaga** (*solo si llegan todos al inicio) |

### Von Neumann — ¿Dónde está qué?

| Componente | Almacena |
|---|---|
| **CPU/Registros** | Datos en proceso de uso inmediato |
| **Memoria principal (RAM)** | Tanto **datos como instrucciones** del programa |
| **Disco** | Programas y datos a largo plazo |

> ⚠️ **Regla clave:** En Von Neumann, **datos E instrucciones están en la misma memoria** y comparten el mismo bus. Si una pregunta dice que están separados → es Harvard, NO Von Neumann.

### Page Fault — ¿Qué es?

| Situación | ¿Qué es? |
|---|---|
| **Page fault** | Página no está en RAM (está en disco/swap) — el SO la carga y reintentó |
| **Segmentation fault** | Acceso a dirección inválida (bug del programa) |
| **Stack overflow** | Stack se llena (demasiadas llamadas recursivas) |

> ⚠️ Page fault **NO es un error del programa** ni corrupción. Es normal: el SO maneja la transición RAM↔disco.

### Proceso vs Hilo

| Característica | Proceso | Hilo |
|---|---|---|
| Espacio de memoria | **Propio** | **Compartido** con otros hilos del mismo proceso |
| Stack | Propio | Propio |
| Creación | `fork()` | `pthread_create()` |
| Comunicación | IPC (señales, pipes, etc.) | Memoria compartida directa |

---

## 📊 PLANIFICACIÓN DE CPU — CÓMO CALCULAR SIEMPRE CON GANTT

### Regla de oro

> **NUNCA calcules waiting/turnaround sin dibujar la línea de tiempo primero.**

### Plantilla de Gantt

```
t=0          t=__          t=__          t=__
|-------------|-------------|-------------|
    P__            P__            P__
  ( __ u )       ( __ u )       ( __ u )
```

### Fórmulas

```
Turnaround Time  = Salida - Llegada
Waiting Time     = Turnaround - Ráfaga
Promedio         = Suma / Número de procesos
```

### Round Robin — paso a paso

1. Escribe la **cola** al inicio: solo los procesos que ya llegaron.
2. Saca el primero, ejecuta `min(quantum, ráfaga)`.
3. Si le quedan unidades → **va al fondo de la cola**.
4. Si mientras ejecuta **llega un proceso nuevo** → se agrega a la cola **después** de los que ya estaban.
5. Repite hasta que no queden procesos.

### Ejemplo rápido (quantum=4)

```
P1(0,8)  P2(1,4)  P3(2,9)

t=0-4:  P1 (le quedan 4)     Cola: [P2]
t=4-8:  P2 (le quedan 0) ✅  Cola: [P1, P3]
t=8-12: P1 (le quedan 0) ✅  Cola: [P3]
t=12-21: P3 (le quedan 0) ✅ Cola: []
```

---

## ⚠️ MIS DEBILIDADES (leer ANTES del examen)

1. **Números fijos donde va parámetro** → cada número literal: *"¿de dónde sales?"*
2. **Destino fijo en corrimientos** → en cada vuelta: *"¿esta casilla cambió?"*
3. **Confiarme con un solo test** → mínimo 2 llamadas distintas.
4. **`=` vs `==`** → revisar siempre las condiciones.
5. **División entre `int`** → si necesito decimal, castear ANTES con `(float)`.
6. **Cálculo sin Gantt** → SIEMPRE dibujar la línea de tiempo antes de fórmulas.
7. **Conceptos similares** → al responder MCQ, preguntar: *"¿qué lo diferencia exactamente del otro?"*
8. **Parámetros con nombres similares** → `cant` vs `cantidad`: *"¿cuál tiene el dato que necesito?"*
9. **Aritmética de punteros** → `*(ptr + n)` accede al elemento en posición `n`, NO es una dirección

---

## 📝 NOTAS LIBRES (para el día del examen)

<br><br><br><br><br>

---

*Basada en guia_examen.md + simulacro 2026-08-26 (53%) + simulacro 2026-08-28 (68.6%). Examen: 4 de septiembre.*
