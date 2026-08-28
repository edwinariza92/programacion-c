#include <stdio.h>

void rotarIzquierda(int* arr, int size) {
    int temp = arr[0];
    for (int i = 0; i < size -1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Original: ");
    printArray(arr, size);    // 10 20 30 40 50

    rotarIzquierda(arr, size);

    printf("Rotado:   ");
    printArray(arr, size);    // 20 30 40 50 10

    return 0;
}