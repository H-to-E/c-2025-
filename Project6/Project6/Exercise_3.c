#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0;
void hanoi(int n,char a,char b, char c) {
	if (n == 1) {
		printf("원판1을 %c 에서 %c 로 옮긴다.\n", a, c);
		count++;
		return;
	}
	else {
		hanoi(n - 1, a, c, b);
		printf("원판 %d 을 %c 에서 %c 로 옮긴다.\n", n, a, c);
		count++;
		hanoi(n - 1, c, b, a);
	}
}

int main(void) {
	int n;
	printf("하노이탑 원판의 개수를 입력하시오:");
	scanf("%d", &n);
	hanoi(n, "A", "B", "C");
	printf("총 %d회 원반을 움직여야 합니다", count);
}