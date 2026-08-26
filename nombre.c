#include <stdio.h>

int main()
{
    char nombre[] = "Edwin";    // 5 bytes: H, o, l, a, \0
    char nombe[] = {'E','d','w','i','n','\0'};
    printf("%s\n",nombe);
    printf("%s",nombre);  
    return 0;
}