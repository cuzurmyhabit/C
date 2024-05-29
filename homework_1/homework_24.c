#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b);			//덧셈 함수
int minus(int a, int b);		//뺄셈 함수
int multiple(int a, int b);		//곱셈 함수
int divide(int a, int b);		//나눗셈 함수

int main(void)
{
	int num1 = 0, num2 = 0, res = 0;
	int selMenu;

	printf("1. 덧셈 \n");
	printf("2. 뺄셈 \n");
	printf("3. 곱셈 \n");
	printf("4. 나눗셈 \n");
	printf("원하는 사칙 연산을 선택하세요: ");
	scanf("%d", &selMenu);

	printf("원하는 첫 번째 숫자(정수)를 입력하세요: ");
	scanf("%d", &num1);

	printf("원하는 두 번째 숫자(정수)를 입력하세요: ");
	scanf("%d", &num2);

	switch(selMenu)
	{
	case 1: res = sum(num1, num2); break;
	case 2: res = minus(num1, num2); break;
	case 3: res = multiple(num1, num2); break;
	case 4: res = divide(num1, num2); break;

	}

	printf("사칙연산의 결과값은 %d입니다.", res);

	return 0;

}

int sum(int a, int b)
{
	int res;

	res = a + b;

	return res;


}

int minus(int a, int b)
{
	int res;

	res = a - b;

	return res;
}

int multiple(int a, int b)
{
	int res;

	res = a * b;

	return res;
}

int divide(int a, int b)
{
	int res;

	res = a / b;

	return res;
}