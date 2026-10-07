#include <stdio.h>

int main (void)
{
    int a, b, c, d, e, min;
    
    scanf("%d%d%d%d%d",&a, &b, &c, &d, &e);
    if (a < b)
     min = a;
    else min = b;
    if  (min < c)
    {}
    else min = c;
    if  (min < d)
    {}
    else min = d;
    if  (min < e)
    {}
    else min = e;
    
    printf("%d\n", min); 
   
    return 0;
}