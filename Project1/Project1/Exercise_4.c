#define _CRT_SECURE_NO_WARNINGS
#define pi 3.14
#include <stdio.h>

int main(void)
{
	float s,r;
	printf("반지름을 입력하시오:");
	scanf("%f", &r);
	s = r * r * pi;
	printf("원의 면적:%f", s);
	
	return 0;
}