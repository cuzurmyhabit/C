#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int radius;
	float area;

	printf("���� ������ �Է�: ");
	scanf("%d", &radius);
	area = radius * radius * 3.14;
	printf("���� ���� %.1f �Դϴ�", area);

	return 0;
}