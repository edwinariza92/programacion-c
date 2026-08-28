#include <stdio.h>
int main () {
    int edad,autorizacion;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Ingrese 1 si tiene autorizacion o Ingrese 0 si no la tiene: ");
    scanf("%d", &autorizacion);
    if (edad>= 18 && autorizacion == 1){
        printf("Puede entrar.\n");
    } else {
        printf("No puede entrar.\n");
    }
    return 0;
}