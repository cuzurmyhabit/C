#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	printf("원하는 정수형 숫자를 하나 입력하세요: ");
	scanf("%d", &a);

	switch (a) {
	case  3: b = 1; break;
	case 5: b = 2; break;
	case 7: b = 3; break;
	default: b = 0;
	}

	printf("결과는 %d 입니다", b);

	return 0;
}