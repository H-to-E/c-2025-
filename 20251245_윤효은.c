#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int tik[3][3];
int count = 0;
int a, b = 0;
int win = 0;

void printtik() {
    printf("=====ƽ���� ������=====\n");
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
        printf("1�� �÷��̾�� ��ǥ�� �Է��Ͻÿ�:(x y): ");
        scanf("%d %d", &a, &b);
        tik[a][b] = 1;
    }
    else {
        printf("2�� �÷��̾�� ��ǥ�� �Է��Ͻÿ�:(x y): ");
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
        printf("\n%d�� �÷��̾ �¸��Ͽ����ϴ�!\n", win);
        printf("������ �ٽ� �����Ϸ��� 1, �����Ϸ��� 0�� �Է��Ͻÿ�: ");
        scanf("%d", &stop);
    }
    return 0;
}
