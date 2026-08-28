#include <stdio.h>
int main()
{
    float nota,suma = 0;
    float promedio;
    float contador = 0;
    for (int i = 1; i <= 5; i++)
    {
        printf("Dame la nota %d: ", i);
        scanf("%f", &nota);
        if (nota<6)
        {
            printf("Reprobado\n");
            break;
        }else
        {
            suma += nota;
            contador ++;
        }
    }if (contador !=0)
    {
        promedio = suma /contador;
    }
    
    printf("%f", promedio);
    return 0;
}
