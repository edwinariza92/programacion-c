# 🎓 Guía de Examen — Listas con arreglos y punteros

> **Lleva esta hoja el día del examen.** Método + fórmulas + espacio para tu traza.
> Examen: 4 de septiembre · Ejercicio tipo tarea 2, sin ayuda.

---

## 🧭 MÉTODO DE 5 PASOS — hazlo EN ORDEN, siempre

| # | Paso | ✔ |
|---|------|---|
| 1 | **Leer el `main` completo**: ¿qué recibe cada función? ¿qué debe imprimirse? | ☐ |
| 2 | **Tabla de roles**: ¿quién es arreglo, contador, dato, índice? | ☐ |
| 3 | **Traza en papel**: dibuja la tabla de casillas y ejecuta cada vuelta | ☐ |
| 4 | **Traducir a código**: una línea de traza = una línea de código | ☐ |
| 5 | **Compilar, correr y COMPARAR** la salida línea por línea con lo esperado | ☐ |

---

## 🔢 FÓRMULAS DE LAS LISTAS

### Roles de los parámetros (la frase guía)

> *"En el arreglo ______ , en la casilla ______ , guarda ______ ."*

- Arreglo → `listArray`
- Contador (lleva `*`) → `*listSize`
- Dato nuevo → `data`
- Posición → `index` / `i`

### Los 4 patrones (memorízalos como pareja)

| Operación | Corre hacia | Bucle | Cuerpo | Dato va a | Contador |
|---|---|---|---|---|---|
| Insertar al inicio | ➡️ derecha | hacia atrás `i--` | `arr[i] = arr[i-1]` | `arr[0]` | `++` |
| Insertar después de index | ➡️ derecha | hacia atrás, para en `i > index` | `arr[i+1] = arr[i]` | `arr[index+1]` | `++` |
| Eliminar en index | ⬅️ izquierda | hacia adelante desde `index+1`, hasta `< *listSize` | `arr[i-1] = arr[i]` | *(no hay dato)* | `--` |
| Insertar al final | *(no corre nada)* | no hay bucle | — | `arr[*listSize]` | `++` |

### Las 3 reglas de oro

1. **El destino del corrimiento VIAJA con `i`.** Si la casilla que escribes es siempre la misma, está mal.
2. **Cero números mágicos.** Pregunta: *¿este número sigue válido si la lista crece o cambia el índice?* Si no → usa el parámetro (`index`, `*listSize`).
3. **`index` decide DÓNDE empieza el corrimiento; la aritmética interna siempre avanza de uno en uno.**

---

## 🛡️ CHECKLIST ANTI-BUG (antes de dar por buena tu función)

- ☐ ¿El destino del corrimiento viaja con `i`?
- ☐ ¿Todas las condiciones son comparaciones con parámetros? (nada de `i > 0` copiado ni `i < 5`)
- ☐ ¿El contador se actualiza? (+1 insertar, −1 borrar)
- ☐ ¿Probé con un **SEGUNDO índice/caso** distinto?
- ☐ ¿Comparé mi salida LÍNEA POR LÍNEA con la esperada?

⚠️ Recuerda: *que aparezca el dato nuevo y el length correcto NO garantiza que todo salió bien* (el 20 puede haber muerto en silencio).

---

## 🧠 MIS DEBILIDADES (leer ANTES de empezar el examen)

1. **Números fijos donde va un parámetro** → me pasó con `listArray[3]`, `i > 1`, `i < 5`.
   *Antídoto:* cada número literal que escriba, preguntarle "¿de dónde sales?"
2. **Destino fijo en corrimientos** → me pasó 2 veces el mismo día.
   *Antídoto:* en cada vuelta preguntar "¿esta casilla cambió respecto a la vuelta anterior?"
3. **Confiarme con un solo test** → el test oficial puede pasar por casualidad.
   *Antídoto:* mínimo 2 llamadas distintas antes de entregar.
4. **Condición de bucle sin comparación o con límite equivocado** → revisar primera y última vuelta mentalmente.
5. **Escribir código antes de hacer la traza** → el método de 5 pasos existe por algo. PAPEL PRIMERO.

---

## 🧪 MI TRAZA — plantilla para usar en el examen

Llamada: `______________________(lista, &listSize, data=____, index=____)`

```
índice:    0     1     2     3     4     5
valor:  |___| |___| |___| |___| |___| |___|     listSize = ____
```

| Vuelta | i | ESCRIBE en casilla | LEE de casilla |
|--------|---|--------------------|----------------|
| 1 | ___ | ___ | ___ |
| 2 | ___ | ___ | ___ |
| 3 | ___ | ___ | ___ |
| 4 | ___ | ___ | ___ |

Estado final de la lista: ____________________________

Salida esperada vs obtenida:

```
Esperada: ______________________________________________
Obtenida: ______________________________________________
¿Idénticas línea por línea?  SÍ ☐   NO ☐ → ¿por qué? ____________
```

---

## 📝 NOTAS LIBRES

<br><br><br><br><br>

---

*Basada en las sesiones 11–14 del curso (tarea 1 ✅, tarea 2 ✅). Última actualización: agosto 2026.*
