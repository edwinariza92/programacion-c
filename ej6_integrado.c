#include <stdio.h>
int main()
{
    float nota,suma = 0;
    for (int i = 1; i <= 5; i++)
    {
        printf("Dame la nota %d: ", i);
        scanf("%f", &nota);
        if (nota<6)
        {
            printf("Reprobado\n");
            break;
        }
        suma += nota;
        float promedio = suma /(i-1);
        printf("%f", promedio);
    }
    return 0;
}
