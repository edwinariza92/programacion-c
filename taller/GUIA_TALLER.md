# Guia del Taller — Explorando Datos en Archivos Binarios con C

## Datos verificados del archivo

| Campo | Valor |
|---|---|
| Magic | `0xaaae` (2 bytes, big endian) |
| Estudiantes | 1000 |
| Cursos | 50 |
| Matriculas | 12060 |
| Edades | min=18, max=29, promedio=23.5 |
| Tamano total | 226974 bytes |

---

## Estructura del archivo

```
[HEADER 14B] [ESTUDIANTES] [CURSOS] [MATRICULAS]
```

### Header (14 bytes)

| Campo | Bytes | Orden | Tipo |
|---|---|---|---|
| Magic | 2 | Big Endian | `uint16_t` → 0xaaae |
| Student Count | 4 | Little Endian | `uint32_t` |
| Course Count | 4 | Little Endian | `uint32_t` |
| Enrollment Count | 4 | Little Endian | `uint32_t` |

> **Nota:** El magic usa Big Endian (`aa ae` = `0xaaae`). Los demas campos usan Little Endian.

### Registro de Estudiante (32 bytes c/u)

| Campo | Bytes | Tipo | Notas |
|---|---|---|---|
| Student ID | 4 | `uint32_t` LE | ID unico |
| Flags | 1 | `uint8_t` | Bit 7 = femenino, Bit 6 = posgrado |
| Name | 23 | `char[23]` | ASCII, rellenado con `\0` |
| Age | 4 | `uint32_t` LE | Edad |

**Decodificar flags:**
```c
int es_femenino = (flags >> 7) & 1;   // bit 7
int es_posgrado = (flags >> 6) & 1;   // bit 6
```

### Registro de Curso (40 bytes c/u)

| Campo | Bytes | Tipo |
|---|---|---|
| Course ID | 4 | `uint32_t` LE |
| Name | 32 | `char[32]` ASCII |
| Credit Hours | 4 | `uint32_t` LE |

### Registro de Matricula (16 bytes c/u)

| Campo | Bytes | Tipo |
|---|---|---|
| Student ID | 4 | `uint32_t` LE |
| Course ID | 4 | `uint32_t` LE |
| Year | 4 | `uint32_t` LE |
| Semester | 4 | `uint32_t` LE |

---

## Plan de desarrollo

### Paso 1 — Programa verificador `verificador.c`

Leer todo el archivo e imprimir cada seccion para confirmar que el parseo es correcto.

```
Salida esperada:
  Header: magic=0xaaae students=1000 courses=50 enrollments=12060
  
  Estudiante #1: ID=1, Nombre="Jake Pierce", Edad=18, Genero=M, Nivel=Pregrado
  Estudiante #2: ID=2, Nombre="Michelle House", Edad=18, Genero=F, Nivel=Pregrado
  ... (1000 total)
  
  Curso #1: ID=1, Nombre="Introduction to Philosophy", Creditos=3
  ... (50 total)
  
  Matricula #1: StudentID=1, CourseID=15, Year=2020, Semester=1
  ... (12060 total)
```

**Conceptos clave del paso 1:**
- `fopen("sample_data.bin", "rb")` — modo lectura binaria
- `fread(&variable, sizeof(tipo), 1, archivo)` — leer bloques
- `fseek(archivo, offset, SEEK_SET)` — saltar a posicion
- `ftell(archivo)` — posicion actual
- `uint32_t` de `<stdint.h>` — entero exacto de 32 bits
- `unsigned char` para el byte de flags
- `fclose()` — cerrar archivo

---

### Paso 2 — Tarea 1: Estudiantes por rango de edad (20%)

**Entrada:** argumentos de linea de comandos
```
./tarea1 sample_data.bin 20 25
```

**Salida:** nombre, edad y genero de estudiantes entre 20 y 25 (incluyentes).

**Plan:**
1. Validar que se reciban 3 argumentos (`argc == 4`)
2. Leer el header
3. Leer cada estudiante
4. Si `edad >= min && edad <= max`, imprimir
5. Cerrar archivo

**Conceptos clave:**
- `argv[]` y `argc`
- `atoi()` o `sscanf()` para convertir argumentos a `int`
- Filtro con `if`

---

### Paso 3 — Tarea 2: Edad promedio por curso (35%)

**Entrada:** solo el nombre del archivo.

**Salida:** para cada curso, imprimir su nombre y la edad promedio de sus estudiantes.

**Plan:**
1. Leer header + todos los estudiantes + todos los cursos + todas las matriculas
2. Para cada curso:
   - Buscar todas las matriculas con ese `courseID`
   - Sumar las edades de esos estudiantes
   - Contar cuantos hay
   - Promedio = suma / cantidad
3. Imprimir cada curso con su promedio

**Conceptos clave:**
- Busqueda lineal en arrays
- Acumulador + contador por curso
- Relacionar matriculas → estudiantes por ID

---

### Paso 4 — Tarea 3: Estadisticas de matricula (45%)

**Entrada:** solo el nombre del archivo.

**Salida:** tabla con columnas:
```
Year | Semester | Male Undergrad | Female Undergrad | Male Grad | Female Grad
```

**Plan:**
1. Leer todo el archivo
2. Recorrer cada matricula
3. Para cada matricula, buscar el estudiante → obtener genero y nivel
4. Contar estudiantes **distintos** por combinacion (year, semester, genero, nivel)
5. Imprimir tabla ordenada

**Conceptos clave:**
- **Estudiantes distintos**: si un estudiante esta matriculado en 3 cursos el mismo semestre, cuenta 1 vez
- Usar un array auxiliar para rastrear IDs ya contados
- Tabla de 2D o mapa year×semester

---

## Errores comunes a evitar

| Error | Solucion |
|---|---|
| `fopen("rb")` en vez de `fopen("r")` | Siempre `"rb"` para archivos binarios |
| Leer sin verificar `fread` retorno | `fread` retorna cantidad de elementos leidos |
| Olvidar `fclose()` | Siempre cerrar el archivo |
| `sizeof(int)` puede variar | Usar `uint32_t` (siempre 4 bytes) |
| Confundir endianness | Verificar con valores conocidos del header |
| No castear flags a `unsigned char` | `char` puede ser signado → errores en bits |

---

## Compilacion

```bash
gcc verificador.c -o verificador
./verificador

gcc tarea1.c -o tarea1
./tarea1 sample_data.bin 20 25
```
