#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void start() { //����â �ݺ�
    printf("=====���п� ����=====\n");
    printf("1.���丮��\n");
    printf("2.����(sin)\n");
    printf("3.�ŵ�����\n");
    printf("4.�α�(base 10)\n");
    printf("5.�ڿ��α�(base e)\n");
    printf("6.������\n");
    printf("7.����\n");
    printf("8.����(nPr)\n");
    printf("9.����(nCr)\n");
    printf("0.����\n");
    printf("================\n");
}

int factorial(int x) {//���丮�� ���
    int result =1 ;
    for (int i = 1; i <= x; i++)
        result *= i;
    return result;
}

int doubletake(int x) {//�ŵ����� ���
    x = x * x;
    return x;
}
int per(int x, int y) {//���� ���
    int result;
    result = factorial(x) / factorial(x-y);
        return result;
}
int com(int x, int y) {//���� ���
    int result;
    result = per(x,y) / factorial(y);
    return result;

}


int main(void) {
    int choose = -1;
    double enter, result;
    while (choose != 0) {
        start();
        printf("����� �����ϼ���:");//��ɼ��ùޱ�
        scanf("%d", &choose);
        printf("================\n");
        //��ɺ���
        if (choose == 1) {
            int n;
            printf("���丮���� ����� ������ �Է��ϼ���:");
            scanf("%d", &n);
            result = factorial(n);
            printf("%d�� %.0lf�Դϴ�.\n", n, result);
        }
        else if (choose == 2) {
            printf("������ ����� ���� �Է��ϼ���:");
            scanf("%lf", &enter);
            result = sin(enter);
            printf("%.2lf�� ���� ���� %.2lf �Դϴ�.\n", enter, result);
        }
        else if (choose == 3) {
            int n;
            printf("�ŵ������� ����� ������ �Է��ϼ���:");
            scanf("%d", &n);
            result = doubletake(n);
            printf(" %d�� �ŵ������� %.0lf�Դϴ�.\n", n, result);
        }
        else if (choose == 4) {
            printf("�α�(base 10)�� ����� ������ �Է��ϼ���:");
            scanf("%lf", &enter);
            result = log10(enter);
            printf("%.0lf�� �α�(base 10)�ǰ��� %.2lf�Դϴ�.\n", enter, result);
        }
        else if (choose == 5) {
            printf("�α�(base e)�� ����� ������ �Է��ϼ���:");
            scanf("%lf", &enter);
            result = log(enter);
            printf("%.0lf�� �α�(base e)���� %.2lf�Դϴ�.\n", enter, result);

        }
        else if (choose == 6) {
            printf("�������� ����� ������ �Է��ϼ���:");
            scanf("%lf", &enter);
            result = sqrt(enter);
            printf("%.0lf�� �����ٰ��� %.2lf�Դϴ�.\n", enter, result);
        }
        else if (choose == 7) {
            printf("������ ����� ������ �Է��ϼ���:");
            scanf("%lf", &enter);
            result = fabs(enter);
            printf("%.0lf�� ������ %.0lf�Դϴ�.\n", enter, result);
        }
        else if (choose == 8) {
            int x, y;
            printf("����(nPr)�� ����� ������ �Է��ϼ���:");
            scanf("%d %d", &x, &y);
            result = per(x, y);
            printf("%dP%d�� ���� %.0lf�Դϴ�.\n", x, y, result);
        }
        else if (choose == 9) {
            int x, y;
            printf("����(nCr)�� ����� ������ �Է��ϼ���:");
            scanf("%d %d", &x, &y);
            result = com(x, y);
            printf("%d %d�� ���� %.0lf�Դϴ�.\n", x, y, result);
        }
        else if (choose == 0) {
            printf("���α׷��� �����մϴ�\n");
            break;
        }

    }
}