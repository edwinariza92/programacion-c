#include <stdio.h>
int main()
{
    int numeros[5];
    int positivos = sizeof(numeros)/sizeof(numeros[0]);
    int negativos = sizeof(numeros)/sizeof(numeros[0]);;
    for (int i = 0; i < 5; i++)
    {
        printf("Dame un número %d: ", i +1 );
        scanf("%d", &numeros[i]);
        if (numeros[i]>0)
        {   
            positivos= numeros[i];
        }else
        {
            negativos = numeros[i];
        }
        
    }
    printf("Hay %d numeros positivos\n", positivos);
    printf("hay %d numeros negativos\n", negativos);
    return 0;
}
