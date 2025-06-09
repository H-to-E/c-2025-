#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("a를 입력하시오:");
	scanf("%d", &a);
	printf("b를 입력하시오:");
	scanf("%d", &b);
	printf("c를 입력하시오:");
	scanf("%d", &c);

	printf("입력된 정수들 중 짝수:");
	if (a % 2 == 0)
	{
		printf("%d ", a);
	}
	if (b% 2 == 0)
	{
		printf("%d ", b);
	}
	if (c % 2 == 0)
	{
		printf("%d ", c);
	}
	return 0;
}