#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int sum;
    int a, b, c;
    int total = 10000;
    int change;
    int c5000, c1000, c500, c100, c50, c10;

    printf("�� ���� ���ǰ��� �Է��ϼ��� : ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c; // �Էµ� ���ǰ��� ��

    change = total - sum; // �Ž����� ���
    printf("=== �Ž������� %d�� �Դϴ�. ===\n", change);

    c5000 = change / 5000;
    change = change % 5000;
    printf("��õ �� �� : %d��\n", c5000);

    c1000 = change / 1000;
    change = change % 1000;
    printf("õ �� �� : %d��\n", c1000);

    c500 = change / 500;
    change = change % 500;
    printf("���� �� ¥�� ���� : %d��\n", c500);

    c100 = change / 100;
    change = change % 100;
    printf("�� �� ¥�� ���� : %d��\n", c100);

    c50 = change / 50;
    change = change % 50;
    printf("���� �� ¥�� ���� : %d��\n", c50);

    c10 = change / 10;
    printf("�� �� ¥�� ���� : %d��\n", c10);

    return 0;
}