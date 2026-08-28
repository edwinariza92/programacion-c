#include <stdio.h>

int main() {
    // Forma 1: array de char
    char str1[] = "Hola";
    
    // Forma 2: puntero a string
    char *str2 = "Hola";

    printf("--- str1 (array) ---\n");
    printf("str1[0] = '%c'\n", str1[0]);
    printf("Direccion de str1: %p\n", (void*)str1);
    printf("Direccion de str1+1: %p\n", (void*)(str1+1));

    printf("\n--- str2 (puntero) ---\n");
    printf("str2[0] = '%c'\n", str2[0]);
    printf("Direccion de str2: %p\n", (void*)str2);
    printf("Direccion de str2+1: %p\n", (void*)(str2+1));

    // ¿Se puede modificar?
    printf("\n--- ¿Se puede modificar? ---\n");
    str1[0] = 'J';
    printf("str1 después de cambiar: %s\n", str1);

    printf("str2 antes de intentar cambiar: %s\n", str2);
    // str2[0] = 'J'; // ← Esto causa un error de compilación

    return 0;
}