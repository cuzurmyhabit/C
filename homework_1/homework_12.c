#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("3���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &num1, & num2, & num3);

	if (num1 > num2 && num1 > num3) {
			printf("���� ū ���� %d�Դϴ�", num1);
	}

	else if (num1 < num2 && num2 > num3) {
			printf("���� ū ���� %d�Դϴ�", num2);
	}

	else{
			printf("���� ū ���� %d�Դϴ�", num3);
	}

	return 0;
}