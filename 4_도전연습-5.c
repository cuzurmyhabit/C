#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;

	printf("5�ڸ� ������ �Է��ϼ���: ");
	scanf("%d", &num);			//24876

	printf("%d", num % 10);
	num = num / 10;

	printf("%d", num % 10);
	num = num / 10;

	printf("%d", num % 10);
	num = num / 10;

	printf("%d", num % 10);
	num = num / 10;

	printf("%d", num % 10);
	num = num / 10;

	return 0;
}