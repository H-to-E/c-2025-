#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int tik[3][3];
int count = 0;
int a, b = 0;
int win = 0;

void printtik() {
    printf("=====틱택토 게임판=====\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tik[i][j] == 1)
                printf(" O ");
            else if (tik[i][j] == 2)
                printf(" X ");
            else
                printf("   ");

            if (j < 2)
                printf("|");
        }
        printf("\n");
        if (i < 2)
            printf("---|---|---\n");
    }
}

void intwhere() {
    printtik();
    if (count % 2 == 0) {
        printf("1번 플레이어는 좌표를 입력하시오:(x y): ");
        scanf("%d %d", &a, &b);
        tik[a][b] = 1;
    }
    else {
        printf("2번 플레이어는 좌표를 입력하시오:(x y): ");
        scanf("%d %d", &a, &b);
        tik[a][b] = 2;
    }
    count++;
}

void checkwin() {
    for (int i = 0; i < 3; i++) {
        if (tik[i][0] != 0 && tik[i][0] == tik[i][1] && tik[i][1] == tik[i][2]) {
            win = tik[i][0];
            return;
        }
    }

    for (int j = 0; j < 3; j++) {
        if (tik[0][j] != 0 && tik[0][j] == tik[1][j] && tik[1][j] == tik[2][j]) {
            win = tik[0][j];
            return;
        }
    }

    if (tik[0][0] != 0 && tik[0][0] == tik[1][1] && tik[1][1] == tik[2][2]) {
        win = tik[0][0];
        return;
    }
    if (tik[0][2] != 0 && tik[0][2] == tik[1][1] && tik[1][1] == tik[2][0]) {
        win = tik[0][2];
        return;
    }
}

void resetGame() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tik[i][j] = 0;
    win = 0;
    count = 0;
}

int main(void) {
    int stop = 1;
    while (stop != 0) {
        resetGame();
        while (win == 0) {
            intwhere();
            checkwin();
        }
        printtik();
        printf("\n%d번 플레이어가 승리하였습니다!\n", win);
        printf("게임을 다시 시작하려면 1, 종료하려면 0을 입력하시오: ");
        scanf("%d", &stop);
    }
    return 0;
}
