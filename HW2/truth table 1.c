#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	printf("Таблица истинности выражения A-->B=!A||B \n");
	printf("\n");
	printf("\n");
	printf("_____________________________\n");
	printf("| A | B | !A | !A||B | A-->B| \n");
	printf("_____________________________\n");
	printf("| 0 | 0 |  1 |   1   |   1  | \n");
	printf("_____________________________\n");
	printf("| 0 | 1 |  1 |   1   |   1  | \n");
	printf("_____________________________\n");
	printf("| 1 | 0 |  0 |   0   |   0  | \n");
	printf("_____________________________\n");
	printf("| 1 | 1 |  0 |   1   |   1  | \n");
	printf("_____________________________\n");
	printf("\n");
	printf("\n");
	printf("Последние 2 стобца совпадают полностью \n");
	printf("Значит тождество A-->B=!A||B Верно\n");
	return 0;
}

