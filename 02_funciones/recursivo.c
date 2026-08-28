#include <stdio.h>

int suma (int n){
    if (n == 0 || n ==1)
    {
        return 1;
    }
    return n + suma(n-1);
}
int main()
{
    int n;
    printf("Dame un número: \n");
    scanf("%d", &n);
    printf("%d",suma(n));
    return 0;
}
