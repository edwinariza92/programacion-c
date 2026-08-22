#include <stdio.h>

struct producto
{
    char nombre[50];
    float precio;
    int cantidad;
};
struct producto producto1 = {"jabon", 12.50, 4};
struct producto producto2 = {"shampoo", 20.30, 6};
struct producto producto3 = {"toalla", 30.67, 10};

int main()
{
    printf("El valor total de  %s es: %.2f \n", producto1.nombre,producto1.precio * producto1.cantidad);
    printf("El valor total de  %s es: %.2f \n", producto2.nombre,producto2.precio * producto2.cantidad);
    printf("El valor total de  %s es: %.2f \n", producto3.nombre,producto3.precio * producto3.cantidad);
    return 0;
}
