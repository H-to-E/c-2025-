#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("a를 입력하시오:");
	scanf("%d", &a);
	printf("b를 입력하시오:");
	scanf("%d", &b);

	if (a % 2 == 0)
		printf("a는 짝수, ");
	else
		printf("a는 홀수, ");

	if (b % 2 == 0)
		printf("b는 짝수");
	else
		printf("b는 홀수");

	return 0;
}