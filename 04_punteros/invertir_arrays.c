#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void invertir(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        swap(&arr[i], &arr[size - 1 - i]);
    }
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
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
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr,size);
    invertir(arr,size);
    printArray(arr,size);
    return 0;
}
