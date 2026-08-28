#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado;
    
    do {
        // Mostrar menú
        printf("\n--- CALCULADORA ---\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);
        
        if (opcion >= 1 && opcion <= 4) {
            printf("Ingresa número 1: ");
            scanf("%f", &num1);
            printf("Ingresa número 2: ");
            scanf("%f", &num2);
        }
        
        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 == 0)
                {
                    printf("No se puede dividir por cero\n");
                    break;
                }else
                {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                    break;
                }
            case 5:
                printf("¡Hasta luego!\n");
                break;
            default:
                printf("Opción inválida\n");
        }
    } while (opcion != 5);
    
    return 0;
}