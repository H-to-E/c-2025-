#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int i;
int rabbit(int n) {
	if (n ==1 || n==2)
		return 1;
		
	else {
		return rabbit(n - 2) + rabbit(n - 1);
	}
		
		
}

int main(void) {
	int r,n;
	printf("n�� �Է��Ͻÿ�:");
	scanf("%d", &n);
	r = rabbit(n);
	printf("%d���� �Ŀ��� %d���� �䳢�� �ֽ��ϴ�",n,r);
}