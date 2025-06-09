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
	printf("n을 입력하시오:");
	scanf("%d", &n);
	r = rabbit(n);
	printf("%d개월 후에는 %d쌍의 토끼가 있습니다",n,r);
}