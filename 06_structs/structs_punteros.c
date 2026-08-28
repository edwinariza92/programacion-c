// Incluimos la biblioteca estándar de entrada/salida (printf, scanf)
#include <stdio.h>
// Incluimos la biblioteca de strings para usar strcpy, strlen, etc.
#include <string.h>

// Definimos un tipo de dato propio llamado "Estudiante"
typedef struct {
    char nombre[50];  // campo nombre: hasta 49 caracteres + '\0'
    int edad;         // campo edad: número entero
    float nota;       // campo nota: número decimal
} Estudiante;         // "Estudiante" es ahora un tipo de dato como int o float

// Función que recibe un PUNTERO a Estudiante y muestra sus datos
// Recibe puntero porque es más eficiente (no copia todo el struct)
void mostrar(Estudiante *e) {   // "e" es un puntero → usamos flecha (->)
    printf("Nombre: %s\n", e->nombre);  // e->nombre = acceder al campo nombre
    printf("Edad: %d\n", e->edad);      // e->edad = acceder al campo edad
    printf("Nota: %.1f\n", e->nota);    // e->nota = acceder al campo nota
}

int main() {
    // Declaramos e inicializamos un Estudiante con valores
    Estudiante e1 = {"Ana", 20, 9.5};

    // Declaramos un puntero que apunta a e1
    // ptr guarda la DIRECCIÓN de memoria de e1
    Estudiante *ptr = &e1;

    // Modificamos la edad a través del puntero
    // ptr->edad = ir a la dirección de e1 y cambiar el campo edad
    ptr->edad = 21;

    // Llamamos a la función pasando el puntero (no la variable normal)
    mostrar(ptr);

    return 0;  // fin del programa
}
