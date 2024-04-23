#include <stdio.h>

int main(void)
{
	int candy = 30, cracker = 70;
	int total;
	int rest = 1000;
	int c500, c100, c50, c10;

	printf("과자 전체 금액: %d \n", cracker);
	printf("사탕 전체 금액: %d \n", candy);
	printf("거스름 돈: %d \n", rest);

	candy = candy * 3;
	cracker = cracker * 2;


	total = candy + cracker;
	rest = rest-total;

	c500 = rest / 500;
	rest = rest % 500;

	c100 = rest / 100;
	rest = rest % 100;

	c50 = rest / 50;
	rest = rest % 50;
	 
	c10 = rest / 10;
	rest = rest % 10;

	printf("==== 거스름 돈 동전의 최소 개수 ====\n");
	printf("500원 %d 개, 100원 %d 개, 50원 %d 개, 10원 %d 개", c500, c100, c50, c10);
}