#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int num;
	
	printf("�� �Է�: ");
	scanf("%d", &num);

	if (num > 0) {
		printf("����Դϴ�");
	}
	else if (num < 0) {
		printf("�����Դϴ�");
	}

	return 0;
}