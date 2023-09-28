#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	char c;
	int i;
	float f;
	double d;
	printf("введите переменную типа char>\n");
	scanf("%c", &c);
	scanf("%c", &c);
	scanf("%c", &c);
	scanf("%c", &c);
	
	printf("%c %d %f %g", c, i, f, d);
}