#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	do
	{
		printf("1~100까지 정수를 입력하시오: ");
		scanf("%d", &num);
	} while (num < 0 || num > 100);

	for (int i = 1; i <= 100; i++) {
		if (i % num == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}