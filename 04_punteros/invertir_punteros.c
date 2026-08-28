#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void invertir(int *arr, int tamanho) {
    int *inicio = arr;           // puntero al primer elemento
    int *fin = arr + tamanho - 1; // puntero al último elemento

    while (inicio < fin) {
        // Mostrar qué estamos intercambiando
        printf("Intercambiando *inicio=%d con *fin=%d\n", *inicio, *fin);

        swap(inicio, fin);

        inicio++;  // avanzar hacia la derecha
        fin--;     // retroceder hacia la izquierda
    }
}

void printArray(int *arr, int tamanho) {
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        if (i > 0) printf(", ");
        printf("%d", *(arr + i));  // también con aritmética de punteros
    }
    printf("]\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Antes:  ");
    printArray(arr, tamanho);

    invertir(arr, tamanho);

    printf("Después: ");
    printArray(arr, tamanho);

    return 0;
}