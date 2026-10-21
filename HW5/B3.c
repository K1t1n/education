#include <stdio.h>

int main(void)
{
    int a, b, i, c;
    int sum = 0;
    scanf("%d %d", &a, &b);

    for (i=a; i<=b; i++)
    {
        c = i*i;
        sum = sum + c;
    
    }
    printf("%d ", sum);
    return 0;
  
}