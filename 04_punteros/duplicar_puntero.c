#include <stdio.h>
void duplicar(int *arr, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        // Aquí necesitas GUARDAR el valor duplicado en el array
        // Ejemplo: si arr[i] vale 1, debe quedar valiendo 2
        arr[i] = arr[i] * 2;  // ← esta línea modifica el array
    }
    printf("\n");
}
void printArray(int *arr, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (i == 0)
        {
            printf("[");
        }
        else
        {
            printf(", ");
        }
        printf("%d", arr[i]);
    }
    printf("] \n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, tamanho);
    duplicar(arr, tamanho);
    printArray(arr,tamanho);

    return 0;
}
