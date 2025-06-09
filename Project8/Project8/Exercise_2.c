#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char user[100];
	printf("문자열을 입력하시오:");
	gets_s(user,sizeof(user));
	int len = strlen(user);
	printf("strlen() 함수를 사용한 길이:%d\n", len);
	int i = 0;
	while (user[i] != '\0') {
		i++;
		
	}
	printf("함수를 사용하지 않고 구한 길이:%d", i);
}