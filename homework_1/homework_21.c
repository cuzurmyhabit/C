#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {		//�� �� ó��
		for (int j = i; j < num; j++) {
			printf(" ");					//���� ���� ���
		}
		for (int j = 1; j <= (2 * i - 1); j++) {
			printf("*");					//*���
		}
		printf("\n");
	}

	return 0;
}