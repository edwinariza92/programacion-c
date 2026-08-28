#include <stdio.h>

void mostrarConIndices(int *arr, int tamanho) {
    printf("Con corchetes: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void mostrarConPunteros(int *arr, int tamanho) {
    printf("Con punteros:  ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void mostrarConPunteroAvanzando(int *arr, int tamanho) {
    printf("Puntero variable: ");
    int *p = arr;  // p apunta al inicio
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *p);  // contenido actual
        p++;  // avanzar al siguiente elemento
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    mostrarConIndices(arr, tamanho);
    mostrarConPunteros(arr, tamanho);
    mostrarConPunteroAvanzando(arr, tamanho);

    return 0;
}