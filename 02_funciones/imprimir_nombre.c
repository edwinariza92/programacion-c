#include <stdio.h>

void imprimir_nombre(char nombre[]) {
    printf("¡Hola, %s!\n",nombre);
}

int main() {
    imprimir_nombre("Edwin");
    imprimir_nombre("Carlos");
    
    return 0;
}