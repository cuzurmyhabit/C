#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(vaid)
{
	char name[10], address[30], silbling[10];
	int age=17;
	int s1=1;
	int s2 = 1;

	strcpy(name, "������");
	strcpy(address, "���󳲵� �����");
	strcpy(silbling, "���");

	printf("���� �̸��� %s�Դϴ�.\n", name);
	printf("���̴� %d���Դϴ�.\n", age);
	printf("���� %s�� ��� ������,\n", address);
	printf("%d�� %d�� �� %s�Դϴ�.\n", s1, s2, silbling);

	return 0;

}