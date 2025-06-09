#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int GCD(int x, int y) {
	if (y == 0)
		return x;
	else
		return GCD(y, x%y); 
}

int main(void) {
	int x, y, result;
	printf("정수 2개를 입력하시오:");
	scanf("%d %d", &x, &y);
	result = GCD(x, y);
	printf("두 정수 %d와 %d의 최대공약수는 %d입니다",x,y,result);
}