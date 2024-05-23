#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("숫자를 입력하세요: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {		//각 줄 처리
		for (int j = i; j < num; j++) {
			printf(" ");					//왼쪽 공백 출력
		}
		for (int j = 1; j <= (2 * i - 1); j++) {
			printf("*");					//*출력
		}
		printf("\n");
	}

	return 0;
}