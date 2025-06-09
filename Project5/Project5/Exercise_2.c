#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
int main(void) {
	int maxnum, x, y;
	printf("정수 2개를 입력하십시오:");
	scanf("%d %d", &x, &y);
	maxnum = max(x, y);
	printf("더 큰 값은 %d입니다", maxnum);
	return 0;

}