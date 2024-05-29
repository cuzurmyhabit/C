#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sum;
	int fee = 1200;
	int count = 0;

	printf("금액을 입력하세요: ");
	scanf("%d", &sum);

	while (sum >= 0)
	{
		sum -= fee;
		if (sum >= 0) {
			count++;
			printf("남은 잔액: %d\n", sum);
		}
	}

	printf("총 이용횟수는 %d회 입니다", count);

	return 0;
}