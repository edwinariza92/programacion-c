#include <stdio.h>
int main () {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad >= 18){
        printf("Eres mayor de edad.\n");
    } else {
        printf("No eres mayor de edad.\n");
    }
    return 0;
}