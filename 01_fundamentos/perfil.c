#include <stdio.h>
int main() {
    char nombre[] = "edwin";
    int edad = 34;
    float altura = 1.80;
    char inicial = 'E';
    int año_nacimiento = 1992;
    float peso = 81.5;

    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);
    printf("Altura: %.2f\n", altura);
    printf("Inicial: %c\n", inicial);
    printf("Año de nacimiento: %d\n", año_nacimiento);
    printf("Peso: %.2f\n", peso);

    return 0;
}