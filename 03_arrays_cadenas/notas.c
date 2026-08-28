#include <stdio.h>
int main()
{
    float notas[5];
    float suma = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Dame la nota %d: ", i +1 );
        scanf("%f", &notas[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        suma = suma + notas[i];
    }
    printf("Promedio: %.2f\n", suma/5);
    return 0;
}
