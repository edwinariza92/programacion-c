#include <stdio.h>
int main(){
    int opcion;
    int num;
    char continua;
    do
    {
        printf("Dame un número \n");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
           printf("El numero es par \n");
        } else {
            printf("El número es impar \n");
        }
        printf("¿Continuar? (s/n) \n");
        scanf(" %c", &continua);
    } while (continua == 's');
    
    return 0;
}
    