#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[50];
    int cantidad;
    float precio;
} Producto;

void agregarProducto(Producto **inventario, int *cantidad, int *capacidad, int id, char nombre[], int cant, float precio)
{
    if (*cantidad == *capacidad)
    {
        int nuevaCapacidad = *capacidad * 2;
        Producto *temp = realloc(*inventario, nuevaCapacidad * sizeof(Producto));
        if (temp == NULL)
        {
            printf("Error de memoria\n");
            exit(1);
        }
        *inventario = temp;
        *capacidad = nuevaCapacidad;
    }
    int i = *cantidad;
    (*inventario)[i].id = id;
    strcpy((*inventario)[i].nombre, nombre);
    (*inventario)[i].cantidad = cantidad;
    (*inventario)[i].precio = precio;
    (*cantidad)++;
}

void imprimirInventario(Producto *inventario, int cantidad) {
    for (int i=0;i<cantidad;i++)
    {
        printf("ID: %d | Nombre: %s | Cantidad: %d | Precio: %.2f\n", inventario[i].id,inventario[i].nombre,inventario[i].cantidad,inventario[i].precio);
    }
    
}


void liberarInventario(Producto **inventario, int *cantidad, int *capacidad)
{
    free(*inventario);
    *inventario = NULL;
    *cantidad = 0;
    *capacidad = 0;
}

int main()
{
    Producto *inventario = NULL;
    int cantidad = 0;
    int capacidad = 0;

    agregarProducto(&inventario, &cantidad, &capacidad, 1, "Laptop", 5, 999.99);
    agregarProducto(&inventario, &cantidad, &capacidad, 2, "Mouse", 20, 25.40);
    agregarProducto(&inventario, &cantidad, &capacidad, 3, "Teclado", 15, 45.00);
    
    imprimirInventario(inventario, cantidad);
    
    liberarInventario(&inventario, &cantidad, &capacidad);


    return 0;
}
