#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");
	int num;
	puts("Введите число");
	scanf("%d", &num);
	printf("Введено число %d\n", num);
	int num2;
	puts("Введите второе число\n");
	scanf("%d", &num2);
	printf("Введено число %d\n", num2);
	printf("Сумма чисел %d и %d равна %d\n", num, num2, num + num2);
	printf("Разность чисел %d и %d равна %d\n", num, num2, num - num2);
	printf("Произведение чисел %d и %d равно %d\n", num, num2, num * num2);
	printf("Частное чисел %d и %d равно %d\n", num2, num, num2 / num);
	printf("Остаток от деления чисел %d на %d равен %d\n", num2, num, num2 % num);
}

