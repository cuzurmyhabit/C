#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0;
	char op;

	printf("��Ģ���� �Է� (����) : ");
	scanf("%d %c %d", &num1, &op, &num2);

	switch (op) {
	case '+':
		printf("%d %c %d = %d", num1, op, num2, num1 + num2);
		break;
	case '-':
		printf("%d %c %d = %d", num1, op, num2, num1 - num2);
		break;
	case '*':
		printf("%d %c %d = %d", num1, op, num2, num1 * num2);
		break;
	case '/':
		printf("%d %c %d = %d", num1, op, num2, num1 / num2);
	}

	return 0;

}