# 🎓 CHULETA DE EXAMEN — Etapa 1

> **Imprime esto (máx 4 páginas).** Lleva al examen del 4 de septiembre.
> Última actualización: 2026-09-03

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

## 📦 STRUCTS + MEMORIA DINÁMICA (Tarea 3 / Examen)

### Template del struct

```c
typedef struct {
    int id;
    char nombre[50];
    int cantidad;
    float precio;
} Producto;
```

### malloc — Reservar memoria

```c
// Reservar espacio para 3 structs Producto
Producto *inventario = malloc(3 * sizeof(Producto));

// SIEMPRE verificar que no falle
if (inventario == NULL) {
    printf("Error de memoria\n");
    exit(1);
}

// Ahora puedo usarlo como un array
inventario[0].id = 1;
strcpy(inventario[0].nombre, "Teclado");
inventario[0].cantidad = 10;
inventario[0].precio = 25.50;
```

### realloc — Redimensionar (con puntero temporal)

```c
// El array está lleno, necesito duplicar capacidad
int nuevaCapacidad = capacidad * 2;

// ⚠️ SIEMPRE usar puntero temporal
Producto *temp = realloc(inventario, nuevaCapacidad * sizeof(Producto));

// Si realloc falla, inventario sigue apuntando a la memoria original
if (temp == NULL) {
    printf("Error de memoria\n");
    exit(1);
}

// Solo si funcionó, actualizo el puntero original
inventario = temp;
capacidad = nuevaCapacidad;
```

> 📌 Si haces `inventario = realloc(inventario, ...)` directamente y falla, **pierdes la referencia** y generas memory leak.

### free — Liberar memoria

```c
// Liberar la memoria reservada
free(inventario);

// Buena práctica: apuntar a NULL para evitar puntero colgante
inventario = NULL;

// Reiniciar contadores
cantidadProductos = 0;
capacidad = 0;
```

> 📌 Después de `free`, el puntero queda "colgante" (apunta a memoria liberada). `NULL` evita bugs.

### Punteros dobles — cuándo y por qué

```c
void agregar(Producto **inventario, int *cantidad, ...) {
    // ** → necesito modificar el PUNTERO original (asignar malloc/realloc)
    // *  → necesito modificar el VALOR original (incrementar contador)
    // sin * → solo leo, no modifico (id, nombre, etc.)
    (*inventario)[*cantidad].id = id;  // acceder al struct en posición *cantidad
}
```

| Parámetro | Necesito... | Ejemplo |
|---|---|---|
| `Producto **inventario` | Modificar el **puntero** (asignar malloc) | `*inventario = malloc(...)` |
| `int *cantidad` | Modificar el **valor** (incrementar) | `(*cantidad)++` |
| `int id` | Solo **leer** el valor | `id` directamente |

### Checklist anti-bug structs

- ☐ ¿Verifiqué `NULL` después de `malloc`/`realloc`?
- ☐ ¿Usé `strcpy` para strings (nunca `=`)?
- ☐ ¿El contador lleva `(*var)++` con paréntesis?
- ☐ ¿`realloc` usa puntero temporal?
- ☐ ¿Confundo `*cantidad` (contador) con `cant` (dato)?

### ⚠️ BUG DEL ARRANQUE DESDE CAPACIDAD 0 (¡falló en simulacro 3!)

```c
// ❌ MAL: si *capacidad == 0 al inicio, 0*2 = 0 → nunca crece
int nuevaCapacidad = *capacidad * 2;

// ✅ BIEN: contemplar el arranque desde vacío
int nuevaCapacidad = (*capacidad == 0) ? 1 : *capacidad * 2;
```

**Cuándo aplica:** si `main` inicia con `Contacto *lista = NULL; int total = 0; int capacidad = 0;`
(como pide "la función debe trabajar sin conocer el tamaño de antemano").

Sin este caso, el **2º elemento** se escribe en memoria sin asignar → dato corrompido.

> 📌 Regla: siempre que redimensiones con `*X * 2`, pregúntate: *"¿y si X empieza en 0?"*

---

## 🖥️ ARQUITECTURA Y SO — DIFERENCIAS QUE CONFUNDO

### Data Hazard vs Resource Hazard (Pipelining)

| Tipo | Qué pasa | Ejemplo |
|---|---|---|
| **Data hazard** | Una instrucción necesita el **resultado de otra** que aún no está listo | `R1 = R2 + R3` antes de que `R2` se escriba |
| **Resource hazard** | Dos instrucciones necesitan la **misma etapa** al mismo tiempo | Dos `IF` en el mismo ciclo |

### Big Endian vs Little Endian

**¿Qué es?** El orden en que los bytes de un número se guardan en memoria.

Ejemplo: el número `0x12345677` (4 bytes) se guarda en direcciones `1000, 1001, 1002, 1003`:

| Endian | Dirección 1000 | 1001 | 1002 | 1003 | Regla |
|---|---|---|---|---|---|
| **Big Endian** | `12` | `34` | `56` | `77` | El **más significativo** primero (como se lee) |
| **Little Endian** | `77` | `56` | `34` | `12` | El **menos significativo** primero (al revés) |

```
Número: 0x12345677

Big Endian (Motorola, red):       Little Endian (Intel/AMD, x86):
Direccion  Memoria                Direccion  Memoria
  1000       12                     1000       77
  1001       34                     1001       56
  1002       56                     1002       34
  1003       77                     1003       12
```

> 📌 **¿Cómo saber cuál usa tu máquina?** La mayoría de PCs usan **Little Endian** (Intel/AMD). Los sistemas de red suelen usar **Big Endian** (network byte order).

> 📌 **En C:** puedes detectarlo con un puntero a `int`:
> ```c
> int x = 0x12345677;
> char *p = (char *)&x;
> if (*p == 0x77) printf("Little Endian\n");
> else printf("Big Endian\n");
> ```

### Decodificación Little Endian — Fórmula

Si lees 4 bytes en Little Endian: `b[0], b[1], b[2], b[3]`

```
Valor = b[0] + b[1]*256 + b[2]*65536 + b[3]*16777216
        b[0] + b[1]*256¹ + b[2]*256² + b[3]*256³
```

**Ejemplo:** bytes `0x02, 0x00, 0x00, 0x00`
Valor = 2 + 0 + 0 + 0 = **2**

**Big Endian es al revés:** b[3] + b[2]*256 + b[1]*65536 + b[0]*16777216

> ⚠️ **Regla:** Little Endian = byte en dirección baja = **menos** significativo. Big Endian = byte en dirección baja = **más** significativo.

### Throughput vs Latencia

| Concepto | Significado |
|---|---|
| **Throughput** | Instrucciones completadas **por unidad de tiempo** |
| **Latencia** | Tiempo que tarda **una sola instrucción** en completarse |

### Fork vs System Calls

| Mecanismo | Para qué sirve |
|---|---|
| **`fork()`** | Crear un **nuevo proceso** (copia del actual). **AMBOS continúan** ejecutándose. Al padre le retorna PID del hijo (>0), al hijo le retorna 0. |
| **System calls** | Mecanismo general para que un proceso **solicite servicios del kernel** (lectura de archivos, creación de procesos, etc.) |

### DMA (Acceso Directo a Memoria)

Permite que **dispositivos de E/S** (discos, tarjetas de red) transfieran datos a/desde la memoria **sin intervención de la CPU en cada byte**. La CPU solo recibe una interrupción cuando la operación termina.

> ⚠️ DMA **NO** es "procesos acceden a memoria sin traducción". DMA es sobre **dispositivos E/S**, no sobre procesos.

### FCFS vs HRRN vs SPN

| Algoritmo | Tipo | Criterio |
|---|---|---|
| **FCFS** | No expropiativo | El que **llegó primero** se ejecuta primero |
| **HRRN** | No expropiativo | El de **mayor ratio** (espera + ráfaga)/ráfaga |
| **SPN** | Expropiativo* | El de **menor ráfaga** (*solo si llegan todos al inicio) — **minimiza waiting time promedio** |

> ⚠️ **Round Robin** es justo en tiempo de respuesta (cada proceso recibe su turno), pero **NO minimiza waiting time**. Eso lo hace **SPN** (Shortest Process Next / Shortest Job First).

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

### Control Hazard / Branch (Pipelining)

¿Qué pasa cuando un **branch es TOMADO (taken)**?

> El pipeline debe **descartar (flush)** las instrucciones que ya entraron detrás del branch, porque iban por la ruta equivocada.

| Situación | Acción |
|---|---|
| Branch **no tomado** | Sigue la secuencia → no se descarta |
| Branch **tomado** | Se **descartan** las instrucciones ya cargadas después del branch |

> ⚠️ **Branch prediction** intenta ADIVINAR de antemano si el salto será tomado para evitar el flush. Pero si el branch es tomado y no se predijo bien, igual hay que descartar.

### Registro Base + Límite vs MMU (Gestión de Memoria)

| Mecanismo | Función |
|---|---|
| **Registro base + límite** | **PROTEGER**: define el rango legal de direcciones del proceso (base a base+límite). Evita que un proceso acceda a memoria ajena. |
| **MMU / Tabla de páginas** | **TRADUCIR**: convierte direcciones lógicas/virtuales en direcciones físicas. |

> ⚠️ NO confundir: base/límite **protege el rango**, no traduce direcciones.

### Punteros dobles — desreferenciación

```c
int x = 7;
int *p = &x;    // p apunta a x
int **pp = &p;  // pp apunta a p

*pp   → p (la dirección de x)
**pp  → *p → x → 7 (el valor de x)
```

> ⚠️ **`**pp`** desreferencia DOS veces. Primero obtiene el puntero intermedio, luego el valor final.

### strcat — ACUMULA, no sobrescribe

```c
char result[20];
strcpy(result, "Hello");   // result = "Hello"
strcat(result, " ");       // result = "Hello "     (agrega, NO sobrescribe)
strcat(result, "World");   // result = "Hello World" (acumula de nuevo)
```

> ⚠️ `strcat` **concatena** al final del string actual. Nunca sobrescribe lo anterior.

### Modificar un string literal (segfault)

```c
char *str = "Hola";
str[0] = 'J';   // ❌ segfault — literal en memoria de SOLO LECTURA

char str[] = "Hola";  // ✅ array mutable, funciona
str[0] = 'J';
```

> ⚠️ Un `char *` apuntando a un literal **sí puede** usar `[]`, pero **no para modificar**.

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
10. **Arranque desde capacidad 0** → si `*capacidad*2`, el caso inicial `*capacidad==0` te deja en 0: usar ternario `(*capacidad==0)?1:*capacidad*2`
11. **Base/límite vs MMU** → base/límite PROTEGE (rango legal), MMU TRADUCE (lógica→física)
12. **Branch tomado** → se DESCARTA (flush) lo que ya entró detrás del branch
13. **Endian decodificación** → Little: `b0+b1*256+b2*65536+b3*16777216`; Big: al revés
14. **fork() no mata al padre** → AMBOS continúan; difieren en el valor de retorno
15. **SPN vs Round Robin** → SPN minimiza waiting; RR es justo en respuesta, NO minimiza waiting
16. **`**pp` desreferencia 2 veces** → primero obtiene el puntero, luego el valor final
17. **strcat acumula** → nunca sobrescribe, concatena al final
18. **DMA es de dispositivos E/S** → NO es sobre procesos/memoria virtual

---

## 📝 NOTAS LIBRES (para el día del examen)

<br><br><br><br><br>

---

*Basada en guia_examen.md + guia_tarea3.md + simulacro 2026-08-26 (53%) + simulacro 2026-08-28 (68.6%) + simulacro 2026-08-31 (73%) + simulacro 2026-09-03 (82% MCQ). Examen: 4 de septiembre.*
