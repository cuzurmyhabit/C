#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double height = 0;
	double weight = 0;
	double bmi, m;

	printf("몸무게(kg)와 키(cm)입력");
	scanf("%.1f %.1f", weight, height);
	m = height / 100.0;
	bmi = (weight / (height * height));
	printf("%s", (25 > bmi >= 20) ? "표준입니다" : "체중 관리가 필요합니다");

	return 0;
}