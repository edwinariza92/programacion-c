#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nombre[50];
    int cantidad;
    float precio;
} Producto;

void inicializarInventario(Producto **inventario, int *cantidadProductos, int *capacidad) {
    *cantidadProductos =0;
    *capacidad = 3;
    *inventario = malloc(*capacidad*sizeof(Producto));
    if(*inventario == NULL)
    {
        printf("Error asignando memoria\n");
        exit(1);
    }
    /*Esta función debe:

* Inicializar cantidadProductos en 0.
* Inicializar capacidad en 3.
* Reservar memoria dinámica para guardar inicialmente 3 productos.
* Usar malloc.
* Verificar si la memoria fue asignada correctamente.*/
}

void agregarProducto(Producto **inventario, int *cantidadProductos, int *capacidad, int id, char nombre[], int cantidad, float precio) {
    if(*cantidadProductos >= *capacidad){
        int nuevaCapacidad = *capacidad *2;
        Producto *temp = realloc(*inventario, nuevaCapacidad *sizeof(Producto));
        if(temp == NULL){
        printf("Error de memoria\n");
        exit(1);
    }
    *inventario = temp;
    *capacidad = nuevaCapacidad;  
    }
    int i = *cantidadProductos;
    (*inventario)[i].id=id;
    strcpy((*inventario)[i].nombre,nombre);
    (*inventario)[i].cantidad = cantidad;
    (*inventario)[i].precio = precio;
    (*cantidadProductos)++;
    /*Esta función debe:

* Agregar un nuevo producto al final del inventario.
* Si el inventario está lleno, debe duplicar su capacidad usando realloc.
* Usar un puntero temporal al hacer realloc para no perder la memoria original si falla.
* Actualizar correctamente cantidadProductos.*/
}

int buscarProductoPorId(Producto *inventario, int cantidadProductos, int id) {
    for(int i = 0; i < cantidadProductos; i++)
    {
        if(inventario[i].id == id)
        {
            return i;
        }
    }
    return -1;
    /*Esta función debe:

* Buscar un producto por su id.
* Retornar el índice donde se encuentra el producto.
* Retornar -1 si no existe.*/
}

void actualizarCantidad(Producto *inventario, int cantidadProductos, int id, int nuevaCantidad) {
    int indice = buscarProductoPorId(inventario,cantidadProductos,id);
    if (indice!= -1)
    {
        inventario[indice].cantidad = nuevaCantidad;
    }else
    {
        printf("Producto con ID %d no encontrado\n", id);
    }
    /*Esta función debe:

* Buscar un producto por su id.
* Si existe, actualizar su cantidad.
* Si no existe, imprimir: Producto con ID X no encontrado. */
}

float calcularValorTotal(Producto *inventario, int cantidadProductos) {
    float total = 0.0;
    for (int i=0;i<cantidadProductos;i++)
    {
        total +=inventario[i].cantidad * inventario[i].precio;
    }
    return total;
    /*Esta función debe:

* Calcular el valor total del inventario.
* El valor de cada producto es: cantidad * precio
* Retornar la suma total. */
}

void imprimirInventario(Producto *inventario, int cantidadProductos) {
    for (int i=0;i<cantidadProductos;i++)
    {
        printf("ID: %d | Nombre: %s | Cantidad: %d | Precio: %.2f\n", inventario[i].id,inventario[i].nombre,inventario[i].cantidad,inventario[i].precio);
    }
    /*Esta función debe imprimir todos los productos con el siguiente formato:
    ID: 1 | Nombre: Teclado | Cantidad: 10 | Precio: 25.50 */
}

void liberarInventario(Producto **inventario, int *cantidadProductos, int *capacidad) {
    free(*inventario);
    *inventario = NULL;
    *cantidadProductos= 0;
    *capacidad = 0;
    /*Esta función debe:

* Liberar la memoria dinámica con free.
* Colocar el puntero inventario en NULL.
* Reiniciar cantidadProductos y capacidad a 0. */
}

int main() {
    Producto *inventario = NULL;
    int cantidadProductos = 0;
    int capacidad = 0; // Se inicializa en 3 dentro de inicializarInventario()

    inicializarInventario(&inventario, &cantidadProductos, &capacidad);

    agregarProducto(&inventario, &cantidadProductos, &capacidad, 1, "Teclado", 10, 25.50);
    agregarProducto(&inventario, &cantidadProductos, &capacidad, 2, "Mouse", 15, 12.75);
    agregarProducto(&inventario, &cantidadProductos, &capacidad, 3, "Monitor", 5, 150.00);

    printf("Inventario inicial:\n");
    imprimirInventario(inventario, cantidadProductos);

    agregarProducto(&inventario, &cantidadProductos, &capacidad, 4, "Audifonos", 8, 40.00);

    printf("\nInventario despues de agregar un producto:\n");
    imprimirInventario(inventario, cantidadProductos);

    actualizarCantidad(inventario, cantidadProductos, 2, 20);

    printf("\nInventario despues de actualizar cantidad:\n");
    imprimirInventario(inventario, cantidadProductos);

    int indice = buscarProductoPorId(inventario, cantidadProductos, 3);

    if (indice != -1) {
        printf("\nProducto encontrado:\n");
        printf("ID: %d | Nombre: %s | Cantidad: %d | Precio: %.2f\n",
               inventario[indice].id,
               inventario[indice].nombre,
               inventario[indice].cantidad,
               inventario[indice].precio);
    } else {
        printf("\nProducto no encontrado.\n");
    }

    float total = calcularValorTotal(inventario, cantidadProductos);
    printf("\nValor total del inventario: %.2f\n", total);

    liberarInventario(&inventario, &cantidadProductos, &capacidad);

    return 0;
}