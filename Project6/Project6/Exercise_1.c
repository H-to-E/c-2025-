#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int GCD(int x, int y) {
	if (y == 0)
		return x;
	else
		return GCD(y, x%y); 
}

int main(void) {
	int x, y, result;
	printf("���� 2���� �Է��Ͻÿ�:");
	scanf("%d %d", &x, &y);
	result = GCD(x, y);
	printf("�� ���� %d�� %d�� �ִ������� %d�Դϴ�",x,y,result);
}