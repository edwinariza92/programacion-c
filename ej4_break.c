#include <stdio.h>

int main() {
    int suma = 0;
    for (int contador = 2; contador <=20; contador += 2) {
        if (suma + contador >50){
            break;
        }
        suma += contador;
        printf("%d\n", suma);
    }

    return 0;
}