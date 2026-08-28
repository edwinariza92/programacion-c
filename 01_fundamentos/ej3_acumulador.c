#include <stdio.h>

int main() {
    int suma = 0;
    for (int contador = 2; contador <=20; contador += 2) {
        suma += contador;
    }
    printf("La suma total es %d\n", suma);

    return 0;
}