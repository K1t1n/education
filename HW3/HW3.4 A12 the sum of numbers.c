#include <stdio.h>

int main(void)
{
    int x, sum;
    scanf("%d", &x);
    sum = x%10;
    sum += (x/10)%10;
    sum += (x/100)%10;
    printf("%d\n", sum);
    return 0;
}
