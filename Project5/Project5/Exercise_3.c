#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int computernumber(int x) {
	int cn = 0;
	int i = 1;
	while (x != 0) {
		if (x%2 == 1) {
			cn = cn +  i;
		}
		x = x / 2;
		i *= 10;
		}
	return cn;
	}
int main(void) {
	int ua, n ;
	printf("이진수로 변환할 정수를 입력하세요:");
	scanf("%d", &ua);
	n = computernumber(ua);
	printf("%d를 이진수로 변환한 결과:%d", ua, n);
	return 0;
 }
