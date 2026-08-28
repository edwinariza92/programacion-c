#include <stdio.h>  // Incluimos la librería de entrada/salida

int main() {
    int num;                // Variable para guardar el número que ingresa el usuario
    int contador = 0;       // Contador de números ingresados (empieza en 0)

    // Bucle que se repite máximo 10 veces (i va de 0 a 9)
    for (int i = 0; i < 10; i++)
    {
        printf("Dame un número: ");           // Pedimos un número al usuario
        scanf("%d", &num);                    // Leemos el número y lo guardamos en num

        if (num == 0)                         // Si el usuario ingresa 0...
        {
            break;                            // ...salimos del bucle inmediatamente
        }

        contador++;                           // Si no fue 0, aumentamos el contador
    }

    // Fuera del bucle, mostramos cuántos números se ingrearon
    printf("Ingresaste %d números \n", contador);

    return 0;  // Fin del programa
}
