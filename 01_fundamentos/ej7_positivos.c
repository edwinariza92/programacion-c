#include <stdio.h>
int main()
{
    int positivos = 0;
    int negativos = 0;
    int numeros;
    do
    {
        printf("Escribe números:");
        scanf("%d",&numeros);
        if (numeros == 0)
        {
           break;
        }
        if (numeros > 0)
        {
            positivos ++;
        }
        else
        {
            negativos ++;
        }
        
    } while (numeros !=0 );
    
    printf("Números positivos: %d\n", positivos);
    printf("Números negativos: %d\n", negativos);   
    return 0;
}
