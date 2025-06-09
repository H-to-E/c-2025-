#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b,n;
	printf("a를 입력하시오:");
	scanf("%d", &a);
	printf("b를 입력하시오:");
	scanf("%d", &b);
	n = (a == b) ? 1 : 0;
	printf("%d", n);
	return 0;
}