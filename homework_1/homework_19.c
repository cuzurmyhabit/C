#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	do
	{
		printf("1~100���� ������ �Է��Ͻÿ�: ");
		scanf("%d", &num);
	} while (num < 0 || num > 100);

	for (int i = 1; i <= 100; i++) {
		if (i % num == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}