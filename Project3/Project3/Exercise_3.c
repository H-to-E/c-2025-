#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, i,j;
	printf("ют╥б:");
	scanf("%d", &a);

	for (i = 1;i <= a;i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;

}