#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[10] = "김몽총";
	char family[10] = "동생";
	char gob[20] = "학생";
	int age = 12;

	printf("=== 가족을 소개합니다 ===\n");
	printf("이름은 %s 입니다.\n", name);
	printf("나와의 관계는 %s 입니다.\n", family);
	printf("직업은 %s 입니다.\n", gob);
	printf("나이는 %d 입니다.\n", age);

	strcpy(name, "김보들");
	strcpy(family, "아빠");
	strcpy(gob, "회사원");
	strcpy(age, "48");

	printf("=== 다음 가족을 소개합니다 ===\n");
	printf("이름은 %s 입니다.\n", name);
	printf("나와의 관계는 %s 입니다.\n", family);
	printf("직업은 %s 입니다.\n", gob);
	printf("나이는 %d 입니다.", age);

	return 0;
}