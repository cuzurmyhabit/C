#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sum;
	int fee = 1200;
	int count = 0;

	printf("�ݾ��� �Է��ϼ���: ");
	scanf("%d", &sum);

	while (sum >= 0)
	{
		sum -= fee;
		if (sum >= 0) {
			count++;
			printf("���� �ܾ�: %d\n", sum);
		}
	}

	printf("�� �̿�Ƚ���� %dȸ �Դϴ�", count);

	return 0;
}