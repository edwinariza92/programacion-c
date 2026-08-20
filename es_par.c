#include <stdio.h>

int es_par(int numero){
    return numero % 2 == 0;
    
}

int main() {
    int numero;
    printf("Ingresa un número: ");
    scanf("%d", &numero);
    
    if (es_par(numero)) {
        printf("%d es par\n", numero);
    } else {
        printf("%d es impar\n", numero);
    }
    
    return 0;
}