#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char user[100];
	printf("���ڿ��� �Է��Ͻÿ�:");
	gets_s(user,sizeof(user));
	int len = strlen(user);
	printf("strlen() �Լ��� ����� ����:%d\n", len);
	int i = 0;
	while (user[i] != '\0') {
		i++;
		
	}
	printf("�Լ��� ������� �ʰ� ���� ����:%d", i);
}