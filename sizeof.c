#include <stdio.h>
int main()
{
    float elementos [7];
    printf("Tamaño del arreglo: %lu bytes \n", sizeof(elementos));
    printf("Elementos: %lu \n", sizeof(elementos) / sizeof(elementos[0]));
    printf("Tamaño de un float: %lu bytes \n", sizeof(float));

    return 0;
}
