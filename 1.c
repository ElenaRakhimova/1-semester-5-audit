#include <Windows.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
void symbols()
{
	setlocale(0, "Ru");
	char symbol; float a, b, c, l;
	printf("Введите 2 числа \n");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	printf("Введите символ \n");
	scanf_s("%c", &symbol, 1);
	scanf_s("%c", &symbol, 1);
	if (symbol == '+')
	{
		a = a + b;
		printf("%f \n", a);
	}
	if (symbol == '-')
	{
		a = a - b;
		printf("%f \n", a);
	}
	if (symbol == '*')
	{
		a = a * b;
		printf("%f \n", a);
	}
	if (symbol == '/')
	{
		a = a / b;
		printf("%f \n", a);
	}
	if (symbol == '%')
	{
		c = fmod(a, b);
		printf("%f \n", c);
	}
	if (symbol == '^')
	{
		l = a;
		for (int j = 1; j <= b - 1; j++)
		{
			a = a * l;
		}
		printf("%f \n", a);
	}
	system("pause");
	return 0;
}