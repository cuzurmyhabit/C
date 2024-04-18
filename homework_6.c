#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int width=0, length=0;		//지역 변수가 초기화

	printf("가로 길이를 입력하세요: ");
	scanf("%d", &width);

	printf("세로 길이를 입력하세요: ");
	scanf("%d", &length);

	printf("사각형의 넓이는 %d입니다",width*length);

	return 0;

}