#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age, fee;

	printf("탑승하는 승객 나이를 입력하세요: ");
	scanf("%d", &age);

	if (age <= 6) {
		fee = 0;
	}
	else if (age <= 12) {
		fee = 450;
	}
	else if (age <= 18) {
		fee = 720;
	}
	else {
		fee = 1200;
	}

	printf("버스카드 잔액은 %d입니다", 10000 - fee);
}