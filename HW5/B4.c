#include <stdio.h>

int main(void)
{
    int n, count;
    
    scanf("%d", &n);
    count = 0;
    
    while (n!=0)
    {
        count ++;
        n = n/10;
    }
     
    count == 3 ? printf("YES"): printf("NO");
    
    return 0;
  
}