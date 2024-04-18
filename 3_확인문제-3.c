#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int age;
	printf("나이를 입력하세요: ");
	scanf("%d", &age);

	printf("내년에는 %d 살이 되는군요!\n", age + 1);

	return 0;
}