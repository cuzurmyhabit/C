#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age, fee;

	printf("ž���ϴ� �°� ���̸� �Է��ϼ���: ");
	scanf("%d", &age);

	if (age <= 6) {
		fee = 0;
	}
	else if (age <= 12) {
		fee = 450;
	}
	else if (age <= 18) {
		fee = 720;
	}
	else {
		fee = 1200;
	}

	printf("����ī�� �ܾ��� %d�Դϴ�", 10000 - fee);
}