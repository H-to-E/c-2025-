#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b,n;
	printf("a�� �Է��Ͻÿ�:");
	scanf("%d", &a);
	printf("b�� �Է��Ͻÿ�:");
	scanf("%d", &b);
	n = (a == b) ? 1 : 0;
	printf("%d", n);
	return 0;
}