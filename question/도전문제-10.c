#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int i = 0, count = 0;

	printf("1~200���� ���� �Է��ϼ���: ");
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
	printf("�� ����ϴ� ���ڴ� %d���Դϴ�.", count);

	return 0;
}