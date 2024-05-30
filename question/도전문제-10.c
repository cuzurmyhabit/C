#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int i = 0, count = 0;

	printf("1~200까지 수를 입력하세요: ");
	scanf("%d", &num);

	while (1)
	{
		i++;

		if (i % 10 != 7) 
		{
			continue;
		}
		if (i > num)
			break;
		printf("%d\n", i);
		count++;
	}
	printf("총 출력하는 숫자는 %d개입니다.", count);

	return 0;
}