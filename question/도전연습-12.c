#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arrNumbers[5];

	printf("���� 5���� �Է��ϼ���: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arrNumbers[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d  ", arrNumbers[(i + j) % 5]);
		}
		printf("\n");
	}

	return 0;
}