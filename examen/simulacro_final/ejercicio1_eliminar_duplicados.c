#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[30];
} Producto;

// ============================================================
// TU CÓDIGO AQUÍ — implementar eliminarDuplicados
// ============================================================
Producto *eliminarDuplicados(Producto *productos, int cantidad, int *nuevaCantidad, int *capacidad)
{
    Producto *resultado = malloc(cantidad * sizeof(Producto));
    *nuevaCantidad = 0;

    for (int i = 0; i < cantidad; i++)
    {
        int duplicado = 0;
        for (int j = 0; j < *nuevaCantidad; j++)
        {
            if (productos[i].id == resultado[j].id)
            {
                duplicado = 1;
                break;
            }
        }
        if (!duplicado)
        {
            resultado[*nuevaCantidad] = productos[i];
            (*nuevaCantidad)++;
        }
    }

    return resultado;
}
// ============================================================

void printArray(Producto *arr, int cant)
{
    printf("[");
    for (int i = 0; i < cant; i++)
    {
        printf("{id:%d,nombre:\"%s\"}", arr[i].id, arr[i].nombre);
        if (i < cant - 1)
            printf(", ");
    }
    printf("]\n");
}

int main()
{
    // Test 1: con duplicados
    printf("=== Test 1: con duplicados ===\n");
    Producto t1[] = {
        {1, "A"}, {2, "B"}, {1, "C"}, {3, "D"}, {2, "E"}};
    int cant1 = 5;
    int nuevaCant1;
    int cap1 = 5;
    Producto *res1 = eliminarDuplicados(t1, cant1, &nuevaCant1, &cap1);
    printArray(res1, nuevaCant1);
    printf("cantidad = %d (esperado: 3)\n\n", nuevaCant1);
    free(res1);

    // Test 2: sin duplicados
    printf("=== Test 2: sin duplicados ===\n");
    Producto t2[] = {
        {10, "X"}, {20, "Y"}, {30, "Z"}};
    int cant2 = 3;
    int nuevaCant2;
    int cap2 = 3;
    Producto *res2 = eliminarDuplicados(t2, cant2, &nuevaCant2, &cap2);
    printArray(res2, nuevaCant2);
    printf("cantidad = %d (esperado: 3)\n\n", nuevaCant2);
    free(res2);

    // Test 3: todos duplicados
    printf("=== Test 3: todos duplicados ===\n");
    Producto t3[] = {
        {5, "M"}, {5, "N"}, {5, "O"}};
    int cant3 = 3;
    int nuevaCant3;
    int cap3 = 3;
    Producto *res3 = eliminarDuplicados(t3, cant3, &nuevaCant3, &cap3);
    printArray(res3, nuevaCant3);
    printf("cantidad = %d (esperado: 1)\n\n", nuevaCant3);
    free(res3);

    // Test 4: un solo elemento
    printf("=== Test 4: un solo elemento ===\n");
    Producto t4[] = {{99, "Unico"}};
    int cant4 = 1;
    int nuevaCant4;
    int cap4 = 1;
    Producto *res4 = eliminarDuplicados(t4, cant4, &nuevaCant4, &cap4);
    printArray(res4, nuevaCant4);
    printf("cantidad = %d (esperado: 1)\n\n", nuevaCant4);
    free(res4);

    return 0;
}