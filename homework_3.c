#include <stdio.h>

int main(void)
{
	int dNumber = 10;
	double fNumber = 5.5;
	char cTxt = 'M';
	char sTxt[10] = "Mirim";

	printf("정수형 출력: %d \n", dNumber);
	printf("실수형 출력: %lf \n", fNumber);
	printf("문자형 출력: %c \n", cTxt);
	printf("문자열형 출력: %s \n", sTxt);

	return 0;
}