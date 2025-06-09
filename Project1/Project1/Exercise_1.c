#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("a를 입력하시오:");
	scanf("%d", &a);
	printf("b를 입력하시오 : ");
	scanf("%d", &b);
	printf("a를 b로 나눈 몫은 %d,나머지는 %d 입니다", a / b, a % b);
	return 0;
}