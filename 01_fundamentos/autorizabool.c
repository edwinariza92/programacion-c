#include <stdio.h>
#include <stdbool.h>
int main () {
    bool autorizacion;
    int edad, respuesta;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Ingrese 1 si tiene autorizacion o Ingrese 0 si no la tiene: ");
    scanf("%d", &respuesta);
    autorizacion = respuesta;
    if (edad>= 18 && autorizacion){
        printf("Puede entrar.\n");
    } else {
        printf("No puede entrar.\n");
    }
    return 0;
}