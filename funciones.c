#include <stdio.h>

int multiplicar(int a, int b){
    return (a*b);
}

float promedio(float a, float b){
    return (a + b)/2;
}

int main()
{
    int resultado = multiplicar(5,3);
    float res= promedio(7,4);
    printf( "5 x 3 = %d\n", resultado);
    printf( "Promedio de 7 y 4 es :%.2f", res);
    return 0;
}
