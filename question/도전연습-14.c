#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int user = 0, computer = 0;
    int again = 0;

    do {
        printf("#선택하세요\n 1. 가위 / 2. 바위 / 3. 보 : ");
        scanf("%d", &user);

        srand(time(NULL));
        computer = rand() % 3 + 1;
            
        printf("# [컴퓨터 %d] -vs- [당신 %d] #\n", computer, user);

        if (user == computer) {
            printf("비겼습니다.\n");
        }
        else if ((user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2)) {
            printf("당신이 이겼습니다!\n");
        }
        else {
            printf("컴퓨터가 이겼습니다!\n");
        }

        printf("다시 하려면 1을 선택하세요: ");
        scanf("%d", &again);

    } while (again == 1);

    return 0;
}