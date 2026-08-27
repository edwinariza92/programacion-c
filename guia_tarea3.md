# 🎯 Guía — Tarea 3: Inventario con Structs y Memoria Dinámica

> **Plataforma:** CoderByte (similar al examen final)
> **Temas:** structs, malloc, realloc, free, punteros, arrays dinámicos

---

## 🧠 MÉTODO PARA ESTA TAREA — 6 pasos

| # | Paso | ✔ |
|---|------|---|
| 1 | **Leer el `main` completo**: ¿qué datos recibe cada función? ¿qué debe imprimirse? | ☐ |
| 2 | **Dibujar la estructura**: ¿cómo se ve el struct `Producto` en memoria? | ☐ |
| 3 | **Identificar punteros**: ¿qué parámetros son `*` ((valor) y `**` (referencia a puntero)? | ☐ |
| 4 | **Traza mental**: ¿qué pasa con `cantidadProductos` y `capacidad` en cada llamada? | ☐ |
| 5 | **Traducir a código**: una línea de traza = una línea de código | ☐ |
| 6 | **Compilar, correr y COMPARAR** la salida línea por línea con lo esperado | ☐ |

---

## 📦 ESTRUCTURA DEL STRUCT

```c
typedef struct {
    int id;          // identificador único
    char nombre[50]; // nombre del producto (array de chars)
    int cantidad;    // unidades en stock
    float precio;    // precio por unidad
} Producto;
```

**En memoria:**
```
Producto p1;
p1.id = 1;
strcpy(p1.nombre, "Teclado");  // NO se puede con = ( strings)
p1.cantidad = 10;
p1.precio = 25.50;
```

---

## 🔑 CONCEPTOS CLAVE PARA CADA FUNCIÓN

### 1. `inicializarInventario` — malloc básico

```c
void inicializarInventario(Producto **inventario, int *cantidadProductos, int *capacidad) {
    *cantidadProductos = 0;    // empezamos vacíos
    *capacidad = 3;            // capacidad inicial
    *inventario = malloc(*capacidad * sizeof(Producto));  // reservar memoria
    if (*inventario == NULL) {
        printf("Error de memoria\n");
        exit(1);
    }
}
```

**Puntos clave:**
- `**inventario` → necesito modificar el puntero original (por eso `**`)
- `*cantidadProductos = 0` → escribir en la dirección del contador
- `malloc(capacidad * sizeof(Producto))` → reservar N structs completos
- **SIEMPRE** verificar que `malloc` no retorne `NULL`

---

### 2. `agregarProducto` — realloc con puntero temporal

```c
void agregarProducto(Producto **inventario, int *cantidadProductos, int *capacidad, 
                     int id, char nombre[], int cantidad, float precio) {
    // ¿Está lleno el inventario?
    if (*cantidadProductos >= *capacidad) {
        // Duplicar capacidad
        int nuevaCapacidad = *capacidad * 2;
        Producto *temp = realloc(*inventario, nuevaCapacidad * sizeof(Producto));
        if (temp == NULL) {
            printf("Error de memoria\n");
            exit(1);
        }
        *inventario = temp;  // solo si realloc funcionó
        *capacidad = nuevaCapacidad;
    }
    
    // Agregar al final
    int i = *cantidadProductos;
    (*inventario)[i].id = id;
    strcpy((*inventario)[i].nombre, nombre);
    (*inventario)[i].cantidad = cantidad;
    (*inventario)[i].precio = precio;
    
    (*cantidadProductos)++;  // incrementar contador
}
```

**Puntos clave:**
- **Puntero temporal `temp`**: si `realloc` falla, `*inventario` no se pierde
- `(*inventario)[i]` → acceder al struct en posición `i`
- `strcpy((*inventario)[i].nombre, nombre)` → copiar string (no se puede con `=`)
- `(*cantidadProductos)++` → incrementar el valor en la dirección

---

### 3. `buscarProductoPorId` — búsqueda lineal

```c
int buscarProductoPorId(Producto *inventario, int cantidadProductos, int id) {
    for (int i = 0; i < cantidadProductos; i++) {
        if (inventario[i].id == id) {
            return i;  // encontrado, retornar índice
        }
    }
    return -1;  // no encontrado
}
```

**Puntos clave:**
- Recorre de 0 a `cantidadProductos - 1`
- Compara `inventario[i].id` con el `id` buscado
- Retorna índice si encuentra, -1 si no

---

### 4. `actualizarCantidad` — buscar y modificar

```c
void actualizarCantidad(Producto *inventario, int cantidadProductos, int id, int nuevaCantidad) {
    int indice = buscarProductoPorId(inventario, cantidadProductos, id);
    if (indice != -1) {
        inventario[indice].cantidad = nuevaCantidad;
    } else {
        printf("Producto con ID %d no encontrado.\n", id);
    }
}
```

---

### 5. `calcularValorTotal` — acumulador

```c
float calcularValorTotal(Producto *inventario, int cantidadProductos) {
    float total = 0.0;
    for (int i = 0; i < cantidadProductos; i++) {
        total += inventario[i].cantidad * inventario[i].precio;
    }
    return total;
}
```

---

### 6. `imprimirInventario` — recorrido con formato

```c
void imprimirInventario(Producto *inventario, int cantidadProductos) {
    for (int i = 0; i < cantidadProductos; i++) {
        printf("ID: %d | Nombre: %s | Cantidad: %d | Precio: %.2f\n",
               inventario[i].id,
               inventario[i].nombre,
               inventario[i].cantidad,
               inventario[i].precio);
    }
}
```

---

### 7. `liberarInventario` — free y reinicio

```c
void liberarInventario(Producto **inventario, int *cantidadProductos, int *capacidad) {
    free(*inventario);          // liberar memoria
    *inventario = NULL;         // evitar puntero colgante
    *cantidadProductos = 0;     // reiniciar contador
    *capacidad = 0;             // reiniciar capacidad
}
```

**Puntos clave:**
- `free(*inventario)` → liberar la memoria reservada
- `*inventario = NULL` → good practice para evitar bugs
- Reiniciar contadores a 0

---

## ⚠️ ERRORES COMUNES EN ESTE TIPO DE TAREAS

| Error | Solución |
|-------|----------|
| `inventario[i].nombre = nombre` | Usar `strcpy(inventario[i].nombre, nombre)` |
| `malloc(sizeof(Producto))` sin capacidad | `malloc(capacidad * sizeof(Producto))` |
| No verificar `NULL` después de `malloc` | Siempre: `if (ptr == NULL) { exit(1); }` |
| `*cantidadProductos++` | `(*cantidadProductos)++` (paréntesis necesarios) |
| Perder memoria con `realloc` | Usar puntero temporal: `temp = realloc(...)` |
| Acceso fuera de rango | Verificar `i < cantidadProductos` |

---

## 🧪 TEST CASES PARA VERIFICAR

```
Salida esperada:
Inventario inicial:
ID: 1 | Nombre: Teclado | Cantidad: 10 | Precio: 25.50
ID: 2 | Nombre: Mouse | Cantidad: 15 | Precio: 12.75
ID: 3 | Nombre: Monitor | Cantidad: 5 | Precio: 150.00

Inventario despues de agregar un producto:
ID: 1 | Nombre: Teclado | Cantidad: 10 | Precio: 25.50
ID: 2 | Nombre: Mouse | Cantidad: 15 | Precio: 12.75
ID: 3 | Nombre: Monitor | Cantidad: 5 | Precio: 150.00
ID: 4 | Nombre: Audifonos | Cantidad: 8 | Precio: 40.00

Inventario despues de actualizar cantidad:
ID: 1 | Nombre: Teclado | Cantidad: 10 | Precio: 25.50
ID: 2 | Nombre: Mouse | Cantidad: 20 | Precio: 12.75
ID: 3 | Nombre: Monitor | Cantidad: 5 | Precio: 150.00
ID: 4 | Nombre: Audifonos | Cantidad: 8 | Precio: 40.00

Producto encontrado:
ID: 3 | Nombre: Monitor | Cantidad: 5 | Precio: 150.00

Valor total del inventario: 1556.00
```

---

## 📝 NOTAS PARA CODERBYTE

- La plantilla ya viene con el `main()` y las firmas de funciones
- Solo debes completar el cuerpo de cada función
- Copia y pega tu solución completa al final
- Recuerda: `#include <stdlib.h>` para `exit()`

---

*Guía creada para Tarea 3 — Agosto 2026*
