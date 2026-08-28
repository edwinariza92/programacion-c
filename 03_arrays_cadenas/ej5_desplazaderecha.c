#include <stdio.h>

void desplaza_derecha(int* arr, int size,int dato, int posicion){
     for (int i = size -1; i >= posicion ; i--)
   {
      arr[i +1]  = arr[i];
   }
    arr[posicion] = dato;    
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
    int arr[10]={1,2,3,4,5,6};
    int size = 5;
    int dato, posicion;
    printf("Array Original: ");
    printArray(arr, size);
    printf("Ingrese el valor a insertar: ");
    scanf("%d",&dato);
    printf("Ingrese la posición (0-4): ");
    scanf("%d",&posicion);
    desplaza_derecha(arr,size,dato,posicion);
    (size)++;
    printf("Array modificado: ");
    printArray(arr, size);

    return 0;
}
