#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int width=0, length=0;		//���� ������ �ʱ�ȭ

	printf("���� ���̸� �Է��ϼ���: ");
	scanf("%d", &width);

	printf("���� ���̸� �Է��ϼ���: ");
	scanf("%d", &length);

	printf("�簢���� ���̴� %d�Դϴ�",width*length);

	return 0;

}