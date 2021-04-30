#include <Windows.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
void real()
{
	setlocale(0, "Ru");
	float max, max1;
	float* a;
	int n;
	printf("¬ведите размер массива \n");
	scanf_s("%d", &n);
	a = (float*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%f", &a[i]);
	}
	max = a[0];
	max1 = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			if (a[i] > max)
			{
				max = a[i];
			}
		}
		else
		{
			if (abs(a[i]) > max)
			{
				max1 = a[i];
			}
			if (abs(a[i]) > max1)
			{
				max1 = a[i];
			}
		}
	}
	if (abs(max1) > max)
	{
		printf("%f \n", max1);
	}
	else
		printf("%f \n", max);
	system("pause");
	return 0;
}