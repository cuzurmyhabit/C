#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double height = 0;
	double weight = 0;
	double bmi, m;

	printf("������(kg)�� Ű(cm)�Է�");
	scanf("%.1f %.1f", weight, height);
	m = height / 100.0;
	bmi = (weight / (height * height));
	printf("%s", (25 > bmi >= 20) ? "ǥ���Դϴ�" : "ü�� ������ �ʿ��մϴ�");

	return 0;
}