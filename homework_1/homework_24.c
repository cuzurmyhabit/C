#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b);			//���� �Լ�
int minus(int a, int b);		//���� �Լ�
int multiple(int a, int b);		//���� �Լ�
int divide(int a, int b);		//������ �Լ�

int main(void)
{
	int num1 = 0, num2 = 0, res = 0;
	int selMenu;

	printf("1. ���� \n");
	printf("2. ���� \n");
	printf("3. ���� \n");
	printf("4. ������ \n");
	printf("���ϴ� ��Ģ ������ �����ϼ���: ");
	scanf("%d", &selMenu);

	printf("���ϴ� ù ��° ����(����)�� �Է��ϼ���: ");
	scanf("%d", &num1);

	printf("���ϴ� �� ��° ����(����)�� �Է��ϼ���: ");
	scanf("%d", &num2);

	switch(selMenu)
	{
	case 1: res = sum(num1, num2); break;
	case 2: res = minus(num1, num2); break;
	case 3: res = multiple(num1, num2); break;
	case 4: res = divide(num1, num2); break;

	}

	printf("��Ģ������ ������� %d�Դϴ�.", res);

	return 0;

}

int sum(int a, int b)
{
	int res;

	res = a + b;

	return res;


}

int minus(int a, int b)
{
	int res;

	res = a - b;

	return res;
}

int multiple(int a, int b)
{
	int res;

	res = a * b;

	return res;
}

int divide(int a, int b)
{
	int res;

	res = a / b;

	return res;
}