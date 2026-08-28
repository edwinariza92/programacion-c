#include <stdio.h>

int main(void)
{
    char nombre[] = "Edwin";    // 6 bytes including '\0'
    char nombe[] = {'E', 'd', 'w', 'i', 'n', '\0'};
    printf("%s\n", nombe);
    printf("%s", nombre);
    return 0;
}