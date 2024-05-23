#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int sum;
    int a, b, c;
    int total = 10000;
    int change;
    int c5000, c1000, c500, c100, c50, c10;

    printf("세 개의 물건값을 입력하세요 : ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c; // 입력된 물건값의 합

    change = total - sum; // 거스름돈 계산
    printf("=== 거스름돈은 %d원 입니다. ===\n", change);

    c5000 = change / 5000;
    change = change % 5000;
    printf("오천 원 권 : %d장\n", c5000);

    c1000 = change / 1000;
    change = change % 1000;
    printf("천 원 권 : %d장\n", c1000);

    c500 = change / 500;
    change = change % 500;
    printf("오백 원 짜리 동전 : %d개\n", c500);

    c100 = change / 100;
    change = change % 100;
    printf("백 원 짜리 동전 : %d개\n", c100);

    c50 = change / 50;
    change = change % 50;
    printf("오십 원 짜리 동전 : %d개\n", c50);

    c10 = change / 10;
    printf("십 원 짜리 동전 : %d개\n", c10);

    return 0;
}