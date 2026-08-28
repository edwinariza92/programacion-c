#include <stdio.h>

// Funciones normales
int sumar(int a, int b) { return a + b; }
int restar(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }

int main() {
    // Declaración de un puntero a función
    // tipo_retorno (*nombre)(tipos_parametros);
    int (*operacion)(int, int);

    // Asignar la dirección de una función
    operacion = sumar;

    // Llamar a través del puntero
    printf("sumar:  %d\n", operacion(10, 3));

    // Cambiar de función con la misma variable
    operacion = restar;
    printf("restar: %d\n", operacion(10, 3));

    operacion = multiplicar;
    printf("multiplicar: %d\n", operacion(10, 3));

    return 0;
}