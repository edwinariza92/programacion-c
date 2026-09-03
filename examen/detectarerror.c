#include <stdio.h>

void ordenar(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];     // ← ¿esta línea está bien?
                arr[j] = temp;     // ← ¿y esta?
            }
        }
    }
}

int main() {
    int nums[] = {5, 2, 8, 1, 9};
    int n = 5;
    ordenar(nums, n);
    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);   // Debería imprimir: 1 2 5 8 9
    return 0;
}