#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, res = 0;

	printf("원하는 정수형 a를 입력하세요: ");
	scanf("%d", &a);
	printf("원하는 정수형 b를 입력하세요: ");
	scanf("%d", &b);

	if (a >= 10) {
		res = a;
	}
	else if (b != 0) {
		res = a / b;
	}

	printf("a=%d, b=%d, res=%d", a, b, res);

	return 0;
}