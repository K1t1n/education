#include <stdio.h>

int n, p, st=1;

int power (int n, int p)
{
    int i;
    for (i = 0; i < p; i++)
   {
    st = st * n;
   }
   return st;    
}

int main()
{
    
    scanf("%d %d", &n, &p);
    power(n,p);
    printf("%d", st);
    return 0;
}
