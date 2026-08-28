#include <stdio.h>

int multiplicar(int a, int b) {
    return (a * b);
}

float promedio(float a, float b) {
    return (a + b) / 2;
}

int main() {
    int num1, num2;
    float f1, f2;
    
    // Pedir números enteros
    printf("Dame dos números enteros: ");
    scanf("%d %d", &num1, &num2);
    
    // Pedir números decimales
    printf("Dame dos números decimales: ");
    scanf("%f %f", &f1, &f2);
    
    // Llamar funciones con los datos del usuario
    int resultado = multiplicar(num1, num2);
    float res = promedio(f1, f2);
    
    printf("%d x %d = %d\n", num1, num2, resultado);
    printf("Promedio de %.2f y %.2f es: %.2f\n", f1, f2, res);
    
    return 0;
}