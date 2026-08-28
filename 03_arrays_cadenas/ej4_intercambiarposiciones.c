#include <stdio.h>

void intercambiar_posicion (int* arr, int a, int b ){
    int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
} 

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (i==0)
        {
            printf("[");
        }
        else
        {
            printf(",");
        }
        printf("%d", arr[i]);
    }
    printf("] \n");
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size = 5;
    int a, b;
    printf("Array Original: ");
    printArray(arr, size);
    printf("Ingrese la primera posición (0-4): ");
    scanf("%d",&a);
    printf("Ingrese la segunda posición (0-4): ");
    scanf("%d",&b);
    intercambiar_posicion(arr,a,b);
    printf("Array modificado: ");
    printArray(arr, size);

    return 0;
}
