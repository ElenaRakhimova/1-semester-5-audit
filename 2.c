#include <Windows.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
void division()
{
	setlocale(0, "Ru"); 
	int d, f, g;
	printf("Введите 2 числа \n");
	scanf_s("%d", &d);
	scanf_s("%d", &f);
	while (d != 0 || f != 0)
	{
		if (f != 0)
		{
			g = d / f;
			printf("Ответ: %d \n", g);
		}
		else
		{
			printf("Нельзя \n");
		}
		scanf_s("%d", &d);
		scanf_s("%d", &f);
	}
	system("pause");
	return 0;
}
