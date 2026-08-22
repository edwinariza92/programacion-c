#include <stdio.h>

int mayor(int n1,int n2){
    if (n1>n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
    
}

int main() {
    int a, b;
    printf("Ingresa dos números: ");
    scanf("%d %d", &a, &b);
    
    printf("El mayor es: %d\n", mayor(a, b));
    
    return 0;
}