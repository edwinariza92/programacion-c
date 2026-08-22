# Referencia: Especificadores de formato en C

Guía rápida para `printf()` y `scanf()`.

---

## Especificadores básicos

| Especificador | Tipo | Ejemplo | Salida |
|---|---|---|---|
| `%d` | `int` (entero decimal) | `printf("%d", 25)` | `25` |
| `%i` | `int` (entero decimal) | `printf("%i", 25)` | `25` |
| `%u` | `unsigned int` (entero sin signo) | `printf("%u", 25)` | `25` |
| `%f` | `float` / `double` (decimal) | `printf("%f", 9.5)` | `9.500000` |
| `%e` | `float` / `double` (notación científica) | `printf("%e", 9.5)` | `9.500000e+00` |
| `%c` | `char` (un solo carácter) | `printf("%c", 'A')` | `A` |
| `%s` | `char[]` (cadena/string) | `printf("%s", "Hola")` | `Hola` |
| `%p` | Puntero (dirección de memoria) | `printf("%p", &x)` | `0x7ffd...` |
| `%%` | Imprimir el símbolo % literal | `printf("100%%")` | `100%` |

---

## `%d` vs `%i`

**¿Cuál es la diferencia?**

En `printf()` → **no hay diferencia**, ambos muestran el entero igual:

```c
printf("%d", 25);  // 25
printf("%i", 25);  // 25
```

En `scanf()` → **sí hay diferencia**:

| `scanf` | Significado |
|---|---|
| `%d` | Lee un número **decimal** (base 10) |
| `%i` | Lee un número en **cualquier base** (si empieza con `0` → octal, si empieza con `0x` → hexadecimal) |

```c
int x;
scanf("%d", &x);
// Usuario escribe: 10  → x = 10

scanf("%i", &x);
// Usuario escribe: 10  → x = 10
// Usuario escribe: 0x10 → x = 16
// Usuario escribe: 010  → x = 8
```

> 💡 **Recomendación:** Usa `%d` siempre a menos que necesites leer octal o hexadecimal.

---

## Modificadores de precisión

### Para `printf()` — controlar decimales

| Sintaxis | Ejemplo | Salida | Significado |
|---|---|---|---|
| `%f` | `printf("%f", 9.5)` | `9.500000` | 6 decimales (default) |
| `%.2f` | `printf("%.2f", 9.5)` | `9.50` | 2 decimales |
| `%.1f` | `printf("%.1f", 9.5)` | `9.5` | 1 decimal |
| `%.0f` | `printf("%.0f", 9.5)` | `10` | Sin decimales |
| `%.10f` | `printf("%.10f", 9.5)` | `9.5000000000` | 10 decimales |

### Ancho de campo

| Sintaxis | Ejemplo | Salida | Significado |
|---|---|---|---|
| `%5d` | `printf("%5d", 25)` | `   25` | Mínimo 5 espacios, alinear derecha |
| `%-5d` | `printf("%-5d", 25)` | `25   ` | Alinear a la izquierda |
| `%05d` | `printf("%05d", 25)` | `00025` | Rellenar con ceros |
| `%10.2f` | `printf("%10.2f", 9.5)` | `      9.50` | 10 espacios, 2 decimales |

---

## Para `scanf()` — especial

| Sintaxis | Tipo | Ejemplo |
|---|---|---|
| `%d` | `int` | `scanf("%d", &x)` |
| `%f` | `float` | `scanf("%f", &nota)` |
| `%lf` | `double` | `scanf("%lf", &nota_doble)` |
| `%c` | `char` | `scanf(" %c", &letra)` ← notar el espacio antes |
| `%s` | `char[]` | `scanf("%s", nombre)` ← sin `&` |
| `%[^\n]` | Línea completa | `scanf("%[^\n]", texto)` ← lee hasta Enter |

> ⚠️ **Importante:** `scanf` con `%c` lee espacios y saltos de línea. Agrega un espacio antes (`" %c"`) para saltarlos.

> ⚠️ **Importante:** Con `%s` no se usa `&` porque el nombre del array ya es una dirección.

---

## Resumen rápido (para pegar en la pared)

```
%d  → entero (decimal)
%i  → entero (cualquier base, solo importa en scanf)
%f  → decimal (float)
%c  → carácter
%s  → string (sin & en scanf)
%p  → dirección de memoria
%lf → double (solo en scanf)
%%  → imprimir % literal

%.2f → 2 decimales
%5d  → mínimo 5 espacios
%-5d → alinear izquierda
%05d → rellenar con ceros
```
