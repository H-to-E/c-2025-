#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("a�� �Է��Ͻÿ�:");
	scanf("%d", &a);
	printf("b�� �Է��Ͻÿ� : ");
	scanf("%d", &b);
	printf("a�� b�� ���� ���� %d,�������� %d �Դϴ�", a / b, a % b);
	return 0;
}