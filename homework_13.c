#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, res = 0;

	printf("���ϴ� ������ a�� �Է��ϼ���: ");
	scanf("%d", &a);
	printf("���ϴ� ������ b�� �Է��ϼ���: ");
	scanf("%d", &b);

	if (a >= 10) {
		res = a;
	}
	else if (b != 0) {
		res = a / b;
	}

	printf("a=%d, b=%d, res=%d", a, b, res);

	return 0;
}