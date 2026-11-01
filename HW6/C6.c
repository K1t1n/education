#include <stdio.h>

unsigned long long int quantityN (unsigned long long int n)
{
    unsigned int i;
    unsigned long long int quantity = 2;
    for (i = 2; i < n; i++)
    {
        quantity = quantity * 2;
        
    }
    return quantity;
}

int main(void)
{
    unsigned  long long int n;
    scanf("%llu", &n);
    if (n > 64)
        printf("Prevshenit chisla 64");
    else
        if (n==1 )
            printf("%llu", n);
        else
            printf("%llu", quantityN(n));
    return 0;
}