#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[10] = "�����";
	char family[10] = "����";
	char gob[20] = "�л�";
	int age = 12;

	printf("=== ������ �Ұ��մϴ� ===\n");
	printf("�̸��� %s �Դϴ�.\n", name);
	printf("������ ����� %s �Դϴ�.\n", family);
	printf("������ %s �Դϴ�.\n", gob);
	printf("���̴� %d �Դϴ�.\n", age);

	strcpy(name, "�躸��");
	strcpy(family, "�ƺ�");
	strcpy(gob, "ȸ���");
	strcpy(age, "48");

	printf("=== ���� ������ �Ұ��մϴ� ===\n");
	printf("�̸��� %s �Դϴ�.\n", name);
	printf("������ ����� %s �Դϴ�.\n", family);
	printf("������ %s �Դϴ�.\n", gob);
	printf("���̴� %d �Դϴ�.", age);

	return 0;
}