#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	
	char user[100];
	printf("���ڿ��� �Է��Ͻʽÿ�:");
	gets_s(user,sizeof(user));
	printf("����� �Է���  ���ڿ�:");
	puts(user);

}
