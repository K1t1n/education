#include <stdio.h>

int main( )
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);            
    double averege = (a + b + c) / 3.0;
    printf("%.2f", averege);                    
    return 0;
}
