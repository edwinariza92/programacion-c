#include <stdio.h>
int main()
{
    int a = 5;
    int b = 10;
    int *puntero_a = &a;
    int *puntero_b = &b;
    printf("Direccion de a: %p\n", &a);
    printf("Direccion de b: %p\n",&b);
    printf("Direccion de puntero: %p\n", puntero_a);
    int temp= *puntero_a;
    *puntero_a = *puntero_b;
    *puntero_b = temp;
    printf("%d %d",a,b);
    return 0;
}
