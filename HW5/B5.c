#include <stdio.h>

int main(void)
{
    int n, d;
    int sum = 0;
    
    scanf("%d", &n);
     
    while (n!=0)
    {
        d = n % 10;
        n = n / 10;
        sum = sum + d;
    }
    
    printf ("%d", sum);
   
    
    return 0;
  
}