#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char food[20];
	int num = 2;
	char subject[20];
	char grade = 'A';

	strcpy(food, "불닭볶음면");
	strcpy(subject, "C언어");
	
	printf("가장 좋아하는 음식은 %s입니다.\n", food);
	printf("불닭볶음면은 %d 봉지까지 먹을 수 있습니다.\n", num);
	printf("가장 좋아하는 과목은 %s입니다.\n", subject);
	printf("%s는 %c 등급 받아보려고 노력하겠습니다.\n", subject, grade);

		return 0;
}