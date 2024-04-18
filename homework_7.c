#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int radius;
	float area;

	printf("원의 반지름 입력: ");
	scanf("%d", &radius);
	area = radius * radius * 3.14;
	printf("원의 면적 %.1f 입니다", area);

	return 0;
}