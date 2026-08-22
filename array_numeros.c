#include <stdio.h>
int main()
{
    int numeros[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Dame un número %d: ", i +1 );
        scanf("%d", &numeros[i]);
    }
    int mayor = numeros[0];
    for (int i = 1; i < 5; i++)
    {
        if (numeros[i]>mayor)
        {   
            mayor= numeros[i];
        }
    }
    int menor = numeros[0];
    for (int i = 1; i < 5; i++)
    {
        if (numeros[i]<menor)
        {   
            menor= numeros[i];
        }
    }
    printf("El número mayor es : %d\n", mayor);
    printf("El número menor es : %d\n", menor);
    return 0;
}
