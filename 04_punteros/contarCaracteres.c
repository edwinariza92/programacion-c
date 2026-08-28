#include <stdio.h>

int contarCaracteres(char *str)
{
    char *p=str;
    int contador = 0;
    while (*p !='\0')
    {
        printf("%c",*p);
        p++;
        contador++;
    }
    return contador;
    //printf("\nNumero de caracteres: %d",contador);
    
}



int main()
{
    char str [] = "Tengo sueño";
    int total = contarCaracteres(str);
    printf("\nTotal: %d\n", total);
    return 0;
}
