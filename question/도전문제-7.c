#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sub1, sub2, sub3;
	char grade;

	printf("���� 3���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &sub1, &sub2, &sub3);

	double total = (double)(sub1 + sub2 + sub3) / 3;
	printf("���: %.1f,", total);

	if (total >= 90) {
		grade = 'A';
	}
	else if (total<90 && total >= 80) {
		grade = 'B';
	}
	else if (total < 80 && total >= 70) {
		grade = 'C';
	}
	else {
		grade = 'F';
	}

	printf(" ����: %c", grade);

	return 0;
}