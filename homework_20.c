#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("1보다 큰 정수를 입력하세요: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			if (j % 3 == 0) {
				printf("X");
			}
			else printf("%d", j);
		}
		printf("\n");
	}

	return 0;
}