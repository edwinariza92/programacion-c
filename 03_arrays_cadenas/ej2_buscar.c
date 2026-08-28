#include <stdio.h>

int buscarElemento(int* arr, int size, int valor) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i]== valor)
        {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 12, 8, 20, 3};
    int size = 5;

    int idx = buscarElemento(arr, size, 20);
    printf("Índice de 20: %d\n", idx);    // Esperado: 3

    idx = buscarElemento(arr, size, 99);
    printf("Índice de 99: %d\n", idx);    // Esperado: -1

    return 0;
}