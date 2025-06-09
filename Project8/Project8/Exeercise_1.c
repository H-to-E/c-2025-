#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	
	char user[100];
	printf("문자열을 입력하십시오:");
	gets_s(user,sizeof(user));
	printf("당신이 입력한  문자열:");
	puts(user);

}
