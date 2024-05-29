#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("3개의 정수를 입력하세요 : ");
	scanf("%d %d %d", &num1, & num2, & num3);

	if (num1 > num2 && num1 > num3) {
			printf("가장 큰 수는 %d입니다", num1);
	}

	else if (num1 < num2 && num2 > num3) {
			printf("가장 큰 수는 %d입니다", num2);
	}

	else{
			printf("가장 큰 수는 %d입니다", num3);
	}

	return 0;
}