#include <Windows.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
void integer()
{
	setlocale(0, "Ru");
	int* a;
	int n;
	printf("¬ведите размер массива \n");
	scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			printf("%d ", a[i]);
		}
	}
	system("pause");
	return 0;
}