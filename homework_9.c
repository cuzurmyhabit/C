#include <stdio.h>

int main(void)
{
	int candy = 30, cracker = 70;
	int total;
	int rest = 1000;
	int c500, c100, c50, c10;

	printf("���� ��ü �ݾ�: %d \n", cracker);
	printf("���� ��ü �ݾ�: %d \n", candy);
	printf("�Ž��� ��: %d \n", rest);

	candy = candy * 3;
	cracker = cracker * 2;


	total = candy + cracker;
	rest = rest-total;

	c500 = rest / 500;
	rest = rest % 500;

	c100 = rest / 100;
	rest = rest % 100;

	c50 = rest / 50;
	rest = rest % 50;
	 
	c10 = rest / 10;
	rest = rest % 10;

	printf("==== �Ž��� �� ������ �ּ� ���� ====\n");
	printf("500�� %d ��, 100�� %d ��, 50�� %d ��, 10�� %d ��", c500, c100, c50, c10);
}