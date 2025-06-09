#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num(int x) {
	int y;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			y = 1;
			break;
		}
		else {
			y = 0;
		}

	}
	return y;
}

int main(void) {
	int x, y;
	printf("정수를 입력하시오:");
	scanf("%d", &x);
	y = num(x);
	if (y == 1)
		printf("%d은 소수가 아닙니다", x);
	else
		printf("%d은 소수입니다.", x);
}