#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("a�� �Է��Ͻÿ�:");
	scanf("%d", &a);
	printf("b�� �Է��Ͻÿ�:");
	scanf("%d", &b);

	if (a % 2 == 0)
		printf("a�� ¦��, ");
	else
		printf("a�� Ȧ��, ");

	if (b % 2 == 0)
		printf("b�� ¦��");
	else
		printf("b�� Ȧ��");

	return 0;
}