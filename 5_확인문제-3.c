#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int waist = 0;
	char size;

	printf("�㸮����� �Է��ϼ���: ");
	scanf("%d", &waist);

	if (waist <= 26) {
		size = 'S';
	}
	else if (26<waist && waist<=32) {
		size = 'M';
	}
	else {
		size = 'L';
	}

	printf("����� �㸮������� %c �Դϴ�", size);

	return 0;
}