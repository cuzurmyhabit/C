#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char input[100] = "\0";
	int cnt = 0;

	printf("���� �Է�: ");
	gets(input);

	for (int i = 0; input[i] != NULL; i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			input[i] += 32;

			cnt++;
		}
		
	}

	printf("�ٲ� ����: ");
	puts(input);
	printf("�ٲ� ���� ��: %d", cnt);

	return 0;
}