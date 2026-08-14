#include <stdio.h>
int main() {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    if (edad < 0){
        printf("Edad no válida.\n");
    } else if (edad< 13){
        printf("Eres un niño.\n");
    } else if (edad <= 17){
        printf("Eres un adolescente.\n");
    } else if (edad<= 59){
        printf("Eres un adulto.\n");
    } else {
        printf("Eres un adulto mayor.\n");
    }
    return 0;
}
