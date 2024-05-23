#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, count = 0;
	int prime;
	int inputNum;

	printf("2 이상 정수를 입력하세요: ");
	scanf("%d", &inputNum);

	for (i = 2; i <= inputNum; i++)
	{
		prime = 1;
		for(j=2; j<i; j++)
		{
			if (i % j == 0)
			{
				prime=0;
			}
		}
		if (prime == 1)
		{
			printf("%d\t", i);
			count++;
				if (count % 5 == 0)
				{
					printf("\n");
				}
		}
	}

	return 0;
}