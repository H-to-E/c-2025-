#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("a�� �Է��Ͻÿ�:");
	scanf("%d", &a);
	printf("b�� �Է��Ͻÿ�:");
	scanf("%d", &b);
	printf("c�� �Է��Ͻÿ�:");
	scanf("%d", &c);

	printf("�Էµ� ������ �� ¦��:");
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