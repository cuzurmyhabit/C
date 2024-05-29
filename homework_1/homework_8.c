#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int num;
	
	printf("수 입력: ");
	scanf("%d", &num);

	if (num > 0) {
		printf("양수입니다");
	}
	else if (num < 0) {
		printf("음수입니다");
	}

	return 0;
}