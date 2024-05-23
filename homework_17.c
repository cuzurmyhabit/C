#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int i = 0;

	do
	{
		printf("원하는 숫자를 입력하세요(입력범위 0~1000): ");
		scanf("%d", &num);
	} while (num < 0 || num > 1000);

	int sum=0;

	for (int i = 1; i <= num; i++) {
		sum += i;
	}

	printf("0부터 %d까지의 합은 %d입니다.", num, sum);

	return 0;
}