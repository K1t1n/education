#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "en_US.UTF-8");
	printf("Let’s\n"); 
	printf("   go\n");
	printf("     to walk\n");
	return 0;
}

