#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int a,i;
	a = 0;
	i = 0;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &a);
	for (i = 1;i <= a;i++)
	{
		printf("%d�� �������� %d�Դϴ�.\n", i, i*i*i);
	}
	return 0;

}