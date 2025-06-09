#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0;
void hanoi(int n,char a,char b, char c) {
	if (n == 1) {
		printf("����1�� %c ���� %c �� �ű��.\n", a, c);
		count++;
		return;
	}
	else {
		hanoi(n - 1, a, c, b);
		printf("���� %d �� %c ���� %c �� �ű��.\n", n, a, c);
		count++;
		hanoi(n - 1, c, b, a);
	}
}

int main(void) {
	int n;
	printf("�ϳ���ž ������ ������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	hanoi(n, "A", "B", "C");
	printf("�� %dȸ ������ �������� �մϴ�", count);
}