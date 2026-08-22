#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nombre[50];
    float precio;
    int cantidad;
} Producto;
int main()
{
    int n;
    printf("Cuantos productos va a ingresar: " );
    scanf("%d",&n);

    Producto *inventario = malloc(n* sizeof(Producto));
    if (inventario == NULL)
    {
        printf("Error: no hay memoria suficiente \n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Producto %d - Nombre: ", i + 1);
        scanf("%s", inventario[i].nombre);
        printf("Producto %d - Precio: ", i + 1);
        scanf("%f", &inventario[i].precio);
        printf("Producto %d - Cantidad: ", i + 1);
        scanf("%d", &inventario[i].cantidad);
    }
    float total_general = 0;
    for (int i = 0; i < n; i++)
    {
        float total = inventario[i].precio * inventario[i].cantidad;
        total_general += total;
    }
    
    printf("\n--- RESUMEN ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s: $%.2f\n", inventario[i].nombre, inventario[i].precio * inventario[i].cantidad);
    }
    printf("Total general =  %.2f", total_general);
    

    // Liberar memoria
    free(inventario);
    
    
    return 0;
}
