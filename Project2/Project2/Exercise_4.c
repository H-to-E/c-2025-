#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int a;
	printf("입력:");
	scanf("%d", &a);

	if (a >= 0)
	{
		printf("입력된 정수는 양수이면서 ");
		if (a % 2 == 0)
			printf("짝수입니다.");
		else
			printf("홀수입니다.");
	}
	else
	{
		printf("입력된 정수는 음수이면서 ");
		if (a % 2 == 0)
			printf("짝수입니다.");
		else
			printf("홀수입니다.");
	}
	return 0;
}