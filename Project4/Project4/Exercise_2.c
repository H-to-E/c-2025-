#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
int main(void) {
	int maxnum, x, y;
	printf("���� 2���� �Է��Ͻʽÿ�:");
	scanf("%d %d", &x, &y);
	maxnum = max(x, y);
	printf("�� ū ���� %d�Դϴ�", maxnum);
	return 0;

}