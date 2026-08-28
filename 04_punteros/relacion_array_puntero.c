#include <stdio.h>

void mostrarArray(int *arr, int tamanho) {
    printf("Dentro de la función:\n");
    printf("Direccion del arr: %p\n", (void*)arr);
    for (int i = 0; i < tamanho; i++) {
        printf("arr[%d] = %d (direccion: %p)\n", i, arr[i], (void*)&arr[i]);
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    
    printf("En main:\n");
    printf("Direccion del arr: %p\n", (void*)arr);
    printf("Tamaño del array: %d\n\n", tamanho);
    
    mostrarArray(arr, tamanho);
    
    return 0;
}