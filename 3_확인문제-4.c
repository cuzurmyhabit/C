#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char name[10];
	int age;
	double hieght;

	printf("�̸� �Է�: ");
	scanf("%s", &name);
	
	printf("���̿� Ű(cm) �Է�: ");
	scanf("%d %lf", &age, &hieght);

	printf("�̸�: %s, ���� %d ��, Ű: %.1lf cm", name, age, hieght);

	return 0;
}