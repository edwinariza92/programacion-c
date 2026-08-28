#include <stdio.h>
int main()
{
    int contador = 0;
    for (int i = 0; i <20 ; i++){
        if (i % 3 == 0){
            continue;
        }
        contador++;
    }
    printf("Se contaron %d números del 1 al 20 que son divisibles por 3 \n",contador);
    return 0;
}
    