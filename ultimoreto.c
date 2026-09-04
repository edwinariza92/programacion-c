#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[50];
} Producto;

int contarPorId(Producto *inventario, int cantidad, int idBuscado)
{
    int contador = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (inventario[i].id == idBuscado)
        {
            contador++;
        }
    }
    return contador;
}

Producto *obtenerPorId(Producto *inventario, int cantidad, int idBuscado, int *nuevaCantidad)
{
    // <-- TÚ escribes aquí (Patrón 1: filtrar)
    Producto *filtrados = malloc(cantidad * sizeof(Producto));
    *nuevaCantidad = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (inventario[i].id == idBuscado)
        {
            filtrados[*nuevaCantidad] = inventario[i];
            (*nuevaCantidad)++;
        }
        
    }
    return filtrados;
}

int main(void)
{
    Producto *inv = malloc(4 * sizeof(Producto));
    inv[0].id = 7;
    strcpy(inv[0].nombre, "Teclado");
    inv[1].id = 3;
    strcpy(inv[1].nombre, "Mouse");
    inv[2].id = 7;
    strcpy(inv[2].nombre, "Monitor");
    inv[3].id = 9;
    strcpy(inv[3].nombre, "Webcam");

    int n = contarPorId(inv, 4, 7);
    printf("Productos con id 7: %d\n", n); // Esperado: 2

    // NUEVO: función que devuelve un arreglo CON LOS PRODUCTOS de un id
    int nuevaCantidad = 0;
    Producto *filtrados = obtenerPorId(inv, 4, 7, &nuevaCantidad);

    printf("Filtrados con id 7 (%d):\n", nuevaCantidad);
    for (int i = 0; i < nuevaCantidad; i++)
        printf("  - %s\n", filtrados[i].nombre);
    // Esperado:
    //   Filtrados con id 7 (2):
    //     - Teclado
    //     - Monitor

    free(filtrados);
    free(inv);
    return 0;
}