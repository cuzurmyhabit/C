#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	
	do
	{
		printf("1~10 ������ ������ �Է��ϼ���: ");
		scanf("%d", &num);
	} while (num < 0 || num > 10);

	for (int i = 1; i <= num; i++) {
		if (i % 3 == 0) {
			printf("X ");
		}
		else {
			printf("%d ", i);
		}
	}

	return 0;

}