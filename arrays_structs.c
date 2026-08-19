#include <stdio.h>

typedef struct {
    char nombre[50];
    float precio;
    int cantidad;
} Producto;

int main() {
    Producto inventario[3] = {
        {"jabon", 12.50, 4},
        {"shampoo", 20.30, 6},
        {"toalla", 30.67, 10}
    };

    float total_general = 0;

    for (int i = 0; i < 3; i++) {
        float total = inventario[i].precio * inventario[i].cantidad;
        total_general += total;
        printf("%s: $%.2f x %d = $%.2f\n",
               inventario[i].nombre,
               inventario[i].precio,
               inventario[i].cantidad,
               total);
    }

    printf("\nTotal general: $%.2f\n", total_general);

    return 0;
}