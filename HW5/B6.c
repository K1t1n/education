#include <stdio.h>

int main(void)
{
    int n, c, d;
        
    scanf("%d", &n);
     
    
    while (n!=0)
    {
        d = n % 10;
        n = n / 10;
        c = n % 10;
        if (d == c ) break;
               
    }
    if (d == c)
    printf("YES");
    else
    printf("NO");
   
    return 0;
  
}