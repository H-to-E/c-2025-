#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char user[100];
	int loss=0, top=0, num = 0;
	printf("패스워드를 입력하세요:");
	gets_s(user,sizeof(user));
	int len = strlen(user);
	if (len < 7)
		printf("유효한 암호가 아닙니다.");
	else {
		for (int i = 0;i <= len;i++) {
			if (islower(user[i]))
				loss++;
			else if (isupper(user[i]))
				top++;
			else if (isdigit(user[i]))
				num++;
			}
		if (loss > 0 && top > 0 && num > 0)
			printf("강한 암호 입니다.");
		else
			printf("유효한 암호가 아닙니다.");
		 }
	}

