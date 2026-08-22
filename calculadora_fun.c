#include <stdio.h>

float calculadora(float a, float b, char operacion) {
    if (operacion == '+')
    {
        return a + b;
    }else if (operacion == '-')
    {
        return a - b;
    }else if (operacion == '*')
    {
        return a * b;
    }else if (operacion == '/')
    {
        if (b == 0)
        {
            printf("No se puede dividir por cero\n");
            return 0;
        }else
        {
            return a / b;
        }        
    }
}

int main() {
    float n1, n2;
    char op;
    
    printf("Ingresa número1, operación (+,-,*,/), número2: ");
    scanf("%f %c %f", &n1, &op, &n2);

    
    printf("Resultado: %.2f\n", calculadora(n1, n2, op));
    
    return 0;
}