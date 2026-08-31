#include <stdio.h>


int main()
{
    int num;
    printf("Dame un número:\n");
    scanf("%d",&num);
    const char *estado = (num % 2 == 0) ? "par" : "impar";
    printf("El numero es: %s", estado);
    return 0;
}
