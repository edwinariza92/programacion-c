#include <stdio.h>
int main(){
    int numero;
    int suma = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        suma = suma + i; // se va sumando cada valor de i
}

printf("Total: %d\n", suma);
return 0;
}