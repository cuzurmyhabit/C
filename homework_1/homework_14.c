#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	printf("���ϴ� ������ ���ڸ� �ϳ� �Է��ϼ���: ");
	scanf("%d", &a);

	switch (a) {
	case  3: b = 1; break;
	case 5: b = 2; break;
	case 7: b = 3; break;
	default: b = 0;
	}

	printf("����� %d �Դϴ�", b);

	return 0;
}