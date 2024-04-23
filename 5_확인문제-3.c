#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int waist = 0;
	char size;

	printf("허리사이즈를 입력하세요: ");
	scanf("%d", &waist);

	if (waist <= 26) {
		size = 'S';
	}
	else if (26<waist && waist<=32) {
		size = 'M';
	}
	else {
		size = 'L';
	}

	printf("당신의 허리사이즈는 %c 입니다", size);

	return 0;
}