#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char food[20];
	int num = 2;
	char subject[20];
	char grade = 'A';

	strcpy(food, "�Ҵߺ�����");
	strcpy(subject, "C���");
	
	printf("���� �����ϴ� ������ %s�Դϴ�.\n", food);
	printf("�Ҵߺ������� %d �������� ���� �� �ֽ��ϴ�.\n", num);
	printf("���� �����ϴ� ������ %s�Դϴ�.\n", subject);
	printf("%s�� %c ��� �޾ƺ����� ����ϰڽ��ϴ�.\n", subject, grade);

		return 0;
}