#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int a,i;
	a = 0;
	i = 0;
	printf("정수를 입력하시오:");
	scanf("%d", &a);
	for (i = 1;i <= a;i++)
	{
		printf("%d의 세제곱은 %d입니다.\n", i, i*i*i);
	}
	return 0;

}