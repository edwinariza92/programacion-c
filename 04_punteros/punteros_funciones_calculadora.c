#include <stdio.h>
int sumar(int a, int b) { return a + b; }
int restar(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }

int main()
{
    int (*operacion)(int, int);
    int opcion;
    int num1, num2;
    int hayOperacion = 0;

    do
    {
        hayOperacion=0;

        // Mostrar menú
        printf("\n--- CALCULADORA ---\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 3)
        {
            printf("Ingresa número 1: ");
            scanf("%d", &num1);
            printf("Ingresa número 2: ");
            scanf("%d", &num2);
        }

        switch (opcion)
        {
        case 1:
            operacion = sumar;
            hayOperacion = 1;
            break;
        case 2:
            operacion = restar;
            hayOperacion = 1;
            break;
        case 3:
            operacion = multiplicar;
            hayOperacion = 1;
            break;
        case 4:
            printf("¡Hasta luego!\n");
            break;
        default:
            printf("Opción inválida\n");
        }
        if (hayOperacion)
        {
            printf("Resultado: %d\n", operacion(num1, num2));
        }

    } while (opcion != 4);

    return 0;
}