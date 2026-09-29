#include <stdio.h>

int main( )
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);              // считываем данные из стандартного входного потока
    printf("%d+%d+%d=%d\n", a, b, c, a+b+c);    //выводим сумму 3 чисел
    printf("%d*%d*%d=%d\n", a, b, c, a*b*c);    //выводим произведение 3 чисел
    return 0;
}
