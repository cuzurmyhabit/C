#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char drink;

	printf("���ϴ� ������� �����ϼ���: ");
	scanf("%c", &drink);

	switch (drink) {
	case 'p':  printf("��ī������Ʈ"); break;
	case 'f': printf("ȯŸ"); break;
	case 'c': printf("�ݶ�"); break;
	default: printf("�Ǹ����� �ʴ� �޴�");
	}

	return 0;
}