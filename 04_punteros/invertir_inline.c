#include <stdio.h>

void invertir(int *arr, int tamanho) {
    int *inicio = arr;
    int *fin = arr + tamanho - 1;

    while (inicio < fin) {
        // Intercambio directo sin función swap
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;

        inicio++;
        fin--;
    }
}

void printArray(int *arr, int tamanho) {
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        if (i > 0) printf(", ");
        printf("%d", *(arr + i));
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