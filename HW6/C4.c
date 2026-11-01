#include <stdio.h>

int function (int x)
{
    int a = 0;
    if (-2 <= x && x < 2)
    {
        a = x * x;
    }
    else if (x >= 2)
    {
        a = x * x + 4 * x + 5;
    }
    else if (x < -2)
    {
        a = 4;
    }
    return a;    
}

int main()
{
    int x = 0;
    int max = -2147483648;
   
    while ((scanf("%d", &x) == 1 && x != 0))
    {
        
        max = max > function (x) ? max : function (x); 
        
    }
    printf("%d", max); 
    return 0;    
}
