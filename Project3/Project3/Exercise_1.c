#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, sum,i; 
	sum = 0;
	i =0;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &a);
	
	while (i < a+1){
		sum = sum + i;
		i++;
	}
	
	printf("1���� %d������ ���� %d�Դϴ�", a, sum);

	return 0;
}