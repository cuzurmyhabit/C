#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int user = 0, computer = 0;
    int again = 0;

    do {
        printf("#�����ϼ���\n 1. ���� / 2. ���� / 3. �� : ");
        scanf("%d", &user);

        srand(time(NULL));
        computer = rand() % 3 + 1;
            
        printf("# [��ǻ�� %d] -vs- [��� %d] #\n", computer, user);

        if (user == computer) {
            printf("�����ϴ�.\n");
        }
        else if ((user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2)) {
            printf("����� �̰���ϴ�!\n");
        }
        else {
            printf("��ǻ�Ͱ� �̰���ϴ�!\n");
        }

        printf("�ٽ� �Ϸ��� 1�� �����ϼ���: ");
        scanf("%d", &again);

    } while (again == 1);

    return 0;
}