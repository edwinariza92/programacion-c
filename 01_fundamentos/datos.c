#include <stdio.h>
int main() {
    int edad;
    printf("¿cual es tu edad? ");
    scanf("%d", &edad);
    float altura;
    printf("¿cual es tu altura? ");
    scanf("%f", &altura);
    float peso;
    printf("¿cual es tu peso? ");
    scanf("%f", &peso);
    printf("--- Datos ---:\n");
    printf("Edad: %d\n", edad);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.2f\n", peso);
    return 0;
}