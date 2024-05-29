#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	if (num > 0) {
		printf("절대값은 %d 입니다", num);
	}
	else {
		printf("절대값은 %d 입니다.", num * -1);
	}

	return 0;
}