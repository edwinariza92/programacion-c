#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[50];
    int edad;
    float nota;
} Persona;

int main() {
    Persona p1;

    strcpy(p1.nombre, "Carlos");
    p1.edad = 20;
    p1.nota = 8.5;

    printf("Nombre: %s\n", p1.nombre);
    printf("Edad: %d\n", p1.edad);
    printf("Nota: %.1f\n", p1.nota);

    return 0;
}
