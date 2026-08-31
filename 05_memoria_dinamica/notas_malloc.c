#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("¿Cuántas notas? ");
    scanf("%d", &n);

    int *notas = malloc(n * sizeof(int));
    if (notas == NULL)
    {
        printf("Error de memoria\n");
        return 1;
    }

    // PELIGRO: recorro hasta n+2, más allá de lo que reservé
    int suma = 0;
    for (int i = 0; i < n + 2; i++)
    {
        printf("Nota %d: ", i + 1);
        scanf("%d", &notas[i]);
        suma += notas[i];
    }

    printf("Promedio: %.2f\n", (float)suma / n);
    // Después del promedio, antes de free(notas):
    notas[n + 10] = 999; // lejos del bloque
    printf("Valor raro escrito: %d\n", notas[n + 10]);

    free(notas);
    return 0;
}