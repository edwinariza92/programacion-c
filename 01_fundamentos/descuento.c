#include <stdio.h>
int main (){
    int edad;
    printf("Ingrese su edad: \n");
    scanf("%d", &edad);
    if (edad<18 || edad >= 60){
        printf("Tiene derecho a descuento");
    }
        else {
            printf("No tiene derecho a descuento"); 
    }
    return 0;
}