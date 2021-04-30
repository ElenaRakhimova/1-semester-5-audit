#include <Windows.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
void arifm()
{
	setlocale(0, "Ru");
	float a[10], s = 0, sr = 0;
	printf("¬ведите 10 чисел \n");
	for (int i = 0; i < 10; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%f", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		s += a[i];
	}
	sr = s / 10;
	printf("%f", sr);
	system("pause");
	return 0;
}