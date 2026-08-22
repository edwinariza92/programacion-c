#include <stdio.h>
int main()
{
    int numeros[5];
    int positivos = 0;
    int negativos = 0;
    int cero = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Dame un número %d: ", i +1 );
        scanf("%d", &numeros[i]);
        if (numeros[i]>0)
        {   
            positivos ++;
        }else if (numeros[i]<0)
        {
            negativos ++;
        }else
        {
            cero ++;
        }
    }
    printf("Hay %d numeros positivos\n", positivos);
    printf("hay %d numeros negativos\n", negativos);
    printf("hay %d numeros ceros\n", cero);
    return 0;
}
