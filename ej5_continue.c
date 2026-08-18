#include <stdio.h>
int main()
{
    int contador = 0;
    for (int i = 0; i <15 ; i++){
        if (i % 3 == 0){
            continue;
        }
        contador++;
        printf("%d ",i);    
    }
    return 0;
}
