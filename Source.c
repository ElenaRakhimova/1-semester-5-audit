#include <Windows.h>
#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(0, "Ru");
	int count;
	printf("¬ведите номер задачи: ");
	scanf_s("%d", &count);
	switch (count)
	{
	case 1:
		symbols();
		break;
	case 2:
		division();
		break;
	case 3:
		integer();
		break;
	case 4:
		real();
		break;
	case 5:
		arifm();
		break;
	default:
		break;
	}
}
