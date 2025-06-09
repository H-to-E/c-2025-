#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, sum,i; 
	sum = 0;
	i =0;
	printf("정수를 입력하시오:");
	scanf("%d", &a);
	
	while (i < a+1){
		sum = sum + i;
		i++;
	}
	
	printf("1부터 %d까지의 합은 %d입니다", a, sum);

	return 0;
}