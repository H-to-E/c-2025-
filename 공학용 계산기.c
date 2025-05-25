#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void start() { //선택창 반복
    printf("=====공학용 계산기=====\n");
    printf("1.팩토리얼\n");
    printf("2.사인(sin)\n");
    printf("3.거듭제곱\n");
    printf("4.로그(base 10)\n");
    printf("5.자연로그(base e)\n");
    printf("6.제곱근\n");
    printf("7.절댓값\n");
    printf("8.순열(nPr)\n");
    printf("9.조합(nCr)\n");
    printf("0.종료\n");
    printf("================\n");
}

int factorial(int x) {//팩토리얼 계산
    int result =1 ;
    for (int i = 1; i <= x; i++)
        result *= i;
    return result;
}

int doubletake(int x) {//거듭제곱 계산
    x = x * x;
    return x;
}
int per(int x, int y) {//순열 계산
    int result;
    result = factorial(x) / factorial(x-y);
        return result;
}
int com(int x, int y) {//조합 계산
    int result;
    result = per(x,y) / factorial(y);
    return result;

}


int main(void) {
    int choose = -1;
    double enter, result;
    while (choose != 0) {
        start();
        printf("기능을 선택하세요:");//기능선택받기
        scanf("%d", &choose);
        printf("================\n");
        //기능분해
        if (choose == 1) {
            int n;
            printf("팩토리얼을 계산할 정수를 입력하세요:");
            scanf("%d", &n);
            result = factorial(n);
            printf("%d는 %.0lf입니다.\n", n, result);
        }
        else if (choose == 2) {
            printf("사인을 계산할 값을 입력하세요:");
            scanf("%lf", &enter);
            result = sin(enter);
            printf("%.2lf의 사인 값은 %.2lf 입니다.\n", enter, result);
        }
        else if (choose == 3) {
            int n;
            printf("거듭제곱을 계산할 정수를 입력하세요:");
            scanf("%d", &n);
            result = doubletake(n);
            printf(" %d의 거듭제곱은 %.0lf입니다.\n", n, result);
        }
        else if (choose == 4) {
            printf("로그(base 10)을 계산할 정수를 입력하세요:");
            scanf("%lf", &enter);
            result = log10(enter);
            printf("%.0lf의 로그(base 10)의값은 %.2lf입니다.\n", enter, result);
        }
        else if (choose == 5) {
            printf("로그(base e)을 계산할 정수를 입력하세요:");
            scanf("%lf", &enter);
            result = log(enter);
            printf("%.0lf의 로그(base e)값은 %.2lf입니다.\n", enter, result);

        }
        else if (choose == 6) {
            printf("제곱근을 계산할 정수를 입력하세요:");
            scanf("%lf", &enter);
            result = sqrt(enter);
            printf("%.0lf의 제곱근값은 %.2lf입니다.\n", enter, result);
        }
        else if (choose == 7) {
            printf("절댓값을 계산할 정수를 입력하세요:");
            scanf("%lf", &enter);
            result = fabs(enter);
            printf("%.0lf의 절댓값은 %.0lf입니다.\n", enter, result);
        }
        else if (choose == 8) {
            int x, y;
            printf("순열(nPr)을 계산할 정수를 입력하세요:");
            scanf("%d %d", &x, &y);
            result = per(x, y);
            printf("%dP%d의 값은 %.0lf입니다.\n", x, y, result);
        }
        else if (choose == 9) {
            int x, y;
            printf("순열(nCr)을 계산할 정수를 입력하세요:");
            scanf("%d %d", &x, &y);
            result = com(x, y);
            printf("%d %d의 값은 %.0lf입니다.\n", x, y, result);
        }
        else if (choose == 0) {
            printf("프로그램을 종료합니다\n");
            break;
        }

    }
}