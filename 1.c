#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");
	int num;
	puts("������� �����");
	scanf("%d", &num);
	printf("������� ����� %d\n", num);
	int num2;
	puts("������� ������ �����\n");
	scanf("%d", &num2);
	printf("������� ����� %d\n", num2);
	printf("����� ����� %d � %d ����� %d\n", num, num2, num + num2);
	printf("�������� ����� %d � %d ����� %d\n", num, num2, num - num2);
	printf("������������ ����� %d � %d ����� %d\n", num, num2, num * num2);
	printf("������� ����� %d � %d ����� %d\n", num2, num, num2 / num);
	printf("������� �� ������� ����� %d �� %d ����� %d\n", num2, num, num2 % num);
}

