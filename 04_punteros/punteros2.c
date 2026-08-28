#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;  // ptr apunta a x

    printf("Valor de x: %d\n", x);
    printf("Dirección de x: %p\n", &x);
    printf("Valor del puntero: %p\n", ptr);      // misma dirección
    printf("Valor apuntado: %d\n", *ptr);         // 10

    *ptr = 50;  // modifica x a través del puntero
    printf("\nDespués de *ptr = 50:\n");
    printf("Valor de x: %d\n", x);  // x cambió a 50

    return 0;
}