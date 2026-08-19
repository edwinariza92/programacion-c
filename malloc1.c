#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nombre[50];
    float precio;
} Producto;

int main() {
    int n;

    printf("¿Cuántos productos? ");
    scanf("%d", &n);

    // Reservar memoria para n productos
    Producto *inventario = malloc(n * sizeof(Producto));

    // Verificar que malloc funcionó
    if (inventario == NULL) {
        printf("Error: no hay memoria suficiente\n");
        return 1;
    }

    // Pedir datos al usuario
    for (int i = 0; i < n; i++) {
        printf("Producto %d - Nombre: ", i + 1);
        scanf("%s", inventario[i].nombre);
        printf("Producto %d - Precio: ", i + 1);
        scanf("%f", &inventario[i].precio);
    }

    // Mostrar todos
    printf("\n--- Inventario ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s: $%.2f\n", inventario[i].nombre, inventario[i].precio);
    }

    // Liberar memoria
    free(inventario);

    return 0;
}