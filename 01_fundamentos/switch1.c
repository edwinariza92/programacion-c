#include <stdio.h>
int main (){
    int opcion;
    printf("Introduce un numero del 1 al 4: ");
    scanf("%d",&opcion);
    switch (opcion)
    {
    case 1 :
        printf("Has elegido jugar \n");
        break;
    case 2 :
        printf("Has elegido estudiar \n");
        break;
    case 3 :
        printf("Has elegido programar \n");
        break;
    case 4 :
        printf("Has elegido salir \n");
        break;
    default:
        printf("Opcion no valida \n");
        break;
    }
    return 0;
}