#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char drink;

	printf("원하는 음료수를 선택하세요: ");
	scanf("%c", &drink);

	switch (drink) {
	case 'p':  printf("포카리스웨트"); break;
	case 'f': printf("환타"); break;
	case 'c': printf("콜라"); break;
	default: printf("판매하지 않는 메뉴");
	}

	return 0;
}