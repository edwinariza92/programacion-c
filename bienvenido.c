#include <stdio.h>

void bienvenido(char nombre[]) {
    printf("Bienvenido, %s\n", nombre);
}
int main()
{
    char *nombre = "Edwin";
    bienvenido(nombre);
    return 0;
}
