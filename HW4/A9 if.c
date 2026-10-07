#include <stdio.h>

int main (void)
{
    int a, b, c, d, e, max;
    
    scanf("%d%d%d%d%d",&a, &b, &c, &d, &e);
    if (a > b)
        max = a;
    else max = b;
    if (max > c)
    {}
    else max = c;
    if (max > d)
    {}
    else max = d;
    if (max > e)
    {}
    else max = e;

    // max = a > b ? a : b;
    // max = max > c ? max : c;
    // max = max > d ? max : d;
    // max = max > e ? max : e;
    
    printf("%d\n", max); 
   
    return 0;
}