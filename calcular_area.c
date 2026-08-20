#include <stdio.h>


float calcular_area(float radio) {
    float pi = 3.14159;
    return pi * (radio * radio);
}

int main() {
    float radio;
    printf("Ingresa el radio: ");
    scanf("%f", &radio);
    
    printf("El área es: %.2f\n", calcular_area(radio));
    
    return 0;
}