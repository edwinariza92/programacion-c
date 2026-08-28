#include <stdio.h>

int main()
{
    int num;
    int contador = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Dame un número : \n");
        scanf("%d", &num);
        if (num < 0)
        {
            continue;
        }
        contador ++;
    }
    printf("Ingresaste %d números positivos \n", contador);
    return 0;
}
