#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hola";

    printf("Contenido del string: %s\n", str);
    printf("Tamaño con strlen: %lu\n", strlen(str));
    printf("sizeof del array: %lu\n", sizeof(str));
    printf("Direccion del string: %p\n", (void*)str);

    printf("\n--- Acceso memoria por memoria ---\n");
    for (int i = 0; i < (int)sizeof(str); i++) {
        printf("str[%d] en %p: '%c' (ASCII %d)\n", i, (void*)&str[i], str[i], (unsigned char)str[i]);
    }

    return 0;
}