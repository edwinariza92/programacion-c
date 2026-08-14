#include <stdio.h>
#include <stdbool.h>
int main (){
    bool llueve;
    int respuesta;
    printf("¿Está lloviendo? (1 = sí, 0 = no): \n");
    scanf("%d", &respuesta);
    llueve = respuesta;
    if (!llueve){
        printf("No está lloviendo, puede salir");
    }
        else {
            printf("Está lloviendo,no puede salir");
    }
    return 0;
}