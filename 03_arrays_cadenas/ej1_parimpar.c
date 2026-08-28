#include <stdio.h>

void contarParesImpares(int* arr, int size, int* pares, int* impares) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            (*pares)++;
        }else
        {
            (*impares) ++;
        }
    }    
}

int main() {
    int arr[] = {10, 15, 22, 33, 40, 7};
    int size = 6;
    int pares = 0, impares = 0;

    contarParesImpares(arr, size, &pares, &impares);

    printf("Pares: %d, Impares: %d\n", pares, impares);
    // Esperado: Pares: 3, Impares: 3
    return 0;
}