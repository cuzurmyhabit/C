#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char name[10];
	int age;
	double hieght;

	printf("이름 입력: ");
	scanf("%s", &name);
	
	printf("나이와 키(cm) 입력: ");
	scanf("%d %lf", &age, &hieght);

	printf("이름: %s, 나이 %d 살, 키: %.1lf cm", name, age, hieght);

	return 0;
}