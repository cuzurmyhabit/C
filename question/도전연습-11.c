#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_multiplication_table(int num);

int main(void)
{
	int num;

	printf("���ϴ� �������� �Է��ϼ���: ");
	scanf("%d", &num);
	print_multiplication_table(num);
}

void print_multiplication_table(int num)
{
	printf("====================\n");
	printf("%d �� ���\n", num);
	printf("====================\n");

	for (int i = 1; i <= 9; i++)
	{
		printf("%d x %d = %d\n", num, i, num * i);
	}
}