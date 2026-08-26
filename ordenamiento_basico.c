#include <stdio.h>

void swap (int* a, int* b ){
    int temp = *a;
    *a=*b;
    *b=temp;
} 

void bubblesort(int* arr, int size){
    for (int i = 0; i <size-1; i++)
    {
        for (int j = 0; j <size - 1 -i; j++)
    {
        if (arr[j]>arr[j+1])
        {
            swap(&arr[j],&arr[j+1]);
        }
        
        //printf("%d", arr[i]);
    }  
    }  
}
void printArray(int* arr, int size) {
    for (int i = 0; i <size; i++) {
        if (i==0)
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
    int arr[]={5,3,8,1,2};
    int size = 5;
    printf("Arreglo original: ");
    printArray(arr,size);
    bubblesort(arr,size);
    //bubblesort(arr,size);
    //bubblesort(arr,size);
    printf("Arreglo ordenado: ");
    printArray(arr,size); 
    return 0;
}
