#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(vaid)
{
	char name[10], address[30], silbling[10];
	int age=17;
	int s1=1;
	int s2 = 1;

	strcpy(name, "지수민");
	strcpy(address, "전라남도 광양시");
	strcpy(silbling, "장녀");

	printf("나의 이름은 %s입니다.\n", name);
	printf("나이는 %d살입니다.\n", age);
	printf("현재 %s에 살고 있으며,\n", address);
	printf("%d남 %d녀 중 %s입니다.\n", s1, s2, silbling);

	return 0;

}