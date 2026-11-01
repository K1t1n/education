#include <stdio.h>

unsigned int summaN (unsigned int n)
{
    unsigned int i, sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main(void)
{
    unsigned int n;
    scanf("%u", &n);
    printf("%u", summaN(n));
    return 0;
}