#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverseArray(int arreglo[], int tamaño){
    for (int i = 0; i < tamaño/2 ; i++)
    {
        swap(&arreglo[i],&arreglo[tamaño-1-i]);
    }
    
};
void printArray(int arreglo[], int tamaño){
    for (int i = 0; tamaño - i ; i++)
    {
        printf("%d ",arreglo[i]); 
    }
    
};

int main()
{
    int a= 5;
    int b=3;
    swap(&a,&b);
    printf("%d %d\n",a,b);

    int *arreglo = NULL;  // Puntero que representará el arreglo dinámico
    int tamaño = 5;       // Tamaño inicial del arreglo
    /* Muy importatnte entender las primeras dos linea antes de seguir
        malloc reserva memoria dinámica para 5 enteros.
        El resultado se guarda en el puntero arreglo.
    */
    arreglo = (int *)malloc(tamaño * sizeof(int));
    // Verifica si malloc pudo asignar memoria correctamente
    if (arreglo == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    // Inicialización de los primeros 5 elementos del arreglo
    arreglo[0] = 10;
    arreglo[1] = 20;
    arreglo[2] = 30;
    arreglo[3] = 40;
    arreglo[4] = 50;
    // Imprime el arreglo original
    printf("Arreglo Original: ");
    printArray(arreglo, tamaño);
    // Cambiamos el tamaño lógico del arreglo de 5 a 7
    tamaño = 7;
    /*
        realloc intenta cambiar el tamaño del bloque de memoria.
        Se usa un puntero temporal para no perder la referencia original
        si realloc falla.
    */
    int *temp = (int *)realloc(arreglo, tamaño * sizeof(int));
    // Verifica si realloc pudo redimensionar el arreglo correctamente
    if (temp == NULL) {
        printf("Error al cambiar el tamaño del arreglo.\n");
        free(arreglo);  // Libera la memoria original antes de terminar
        return 1;
    }
    // Si realloc fue exitoso, actualizamos el puntero principal
    arreglo = temp;
    // Inicializamos los nuevos elementos agregados al arreglo
    arreglo[5] = 60;
    arreglo[6] = 70;
    // Imprime el arreglo después de cambiar el tamaño
    printf("\nArreglo después de cambiar el tamaño: ");
    printArray(arreglo, tamaño);
    // Invierte el arreglo completo
    reverseArray(arreglo, tamaño);
    // Imprime el arreglo invertido
    printf("\nArreglo Invertido: ");
    printArray(arreglo, tamaño);
    /*
        Intercambia los elementos en índice 1 e índice 3.
        Después de invertir:
        índice 1 = 60
        índice 3 = 40
        Luego del intercambio:
        índice 1 = 40
        índice 3 = 60
    */
    swap(&arreglo[1], &arreglo[3]);
    // Imprime el arreglo después del intercambio
    printf("\nArreglo después del intercambio: ");
    printArray(arreglo, tamaño);
    // Libera la memoria dinámica usada por el arreglo
    free(arreglo);
    // Evita que el puntero quede apuntando a memoria liberada
    arreglo = NULL;
   return 0;
}
