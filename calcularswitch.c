#include <stdio.h>
int main (){
    int num1,num2;
    int opcion;
    printf("Ingresa número 1: \n ");
    scanf("%d",&num1);
    printf("Ingresa número 2: \n ");
    scanf("%d",&num2);
    printf(" 1.Sumar\n 2.Restar\n 3.Multiplicar\n 4.Dividir\n");
    scanf("%d",&opcion);
    switch (opcion)
    {
    case 1 :
        printf("El resultado es %d\n",num1 + num2);
        break;
    case 2 :
        printf("El resultado es %d\n",num1 - num2);
        break;
    case 3 :
        printf("El resultado es %d\n",num1 * num2);
        break;
    case 4 :
        if(num2 == 0){
            printf("No se puede dividir por cero ");
        break;
        }else
        {
            printf("El resultado es %d\n",num1 / num2);
        break;   
        }
    default:
        printf("Opcion no valida \n");
        break;
    }
    return 0;
}