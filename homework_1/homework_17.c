#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int i = 0;

	do
	{
		printf("���ϴ� ���ڸ� �Է��ϼ���(�Է¹��� 0~1000): ");
		scanf("%d", &num);
	} while (num < 0 || num > 1000);

	int sum=0;

	for (int i = 1; i <= num; i++) {
		sum += i;
	}

	printf("0���� %d������ ���� %d�Դϴ�.", num, sum);

	return 0;
}