#include <stdio.h>

void mod (void)
{
    int a;
    scanf("%d", &a);
    
    if (a<0)
    {
        a=-a;
    }
    printf("%d", a);    
}

int main()
{
    mod ();
    return 0;
}