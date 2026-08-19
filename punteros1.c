#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    float nota = 9.5;

    printf("x = %d, dirección = %p\n", x, &x);
    printf("y = %d, dirección = %p\n", y, &y);
    printf("nota = %.1f, dirección = %p\n", nota, &nota);

    return 0;
}