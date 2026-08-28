#include <stdio.h>

int main() {
    float notas[5];
    float promedio;
    float suma = 0;
    
    for (int i = 0; i < 5; i++)  // ← Cambio aquí
    {
        float nota;
        printf("Dame la nota %d: ", i + 1);
        scanf("%f", &nota);
        notas[i] = nota;
        suma = suma + nota;
    }
    
    promedio = suma / 5;
    printf("Promedio: %.2f\n", promedio);
    
    return 0;
}