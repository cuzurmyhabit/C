#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	if (num > 0) {
		printf("���밪�� %d �Դϴ�", num);
	}
	else {
		printf("���밪�� %d �Դϴ�.", num * -1);
	}

	return 0;
}