#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int a;
	printf("�Է�:");
	scanf("%d", &a);

	if (a >= 0)
	{
		printf("�Էµ� ������ ����̸鼭 ");
		if (a % 2 == 0)
			printf("¦���Դϴ�.");
		else
			printf("Ȧ���Դϴ�.");
	}
	else
	{
		printf("�Էµ� ������ �����̸鼭 ");
		if (a % 2 == 0)
			printf("¦���Դϴ�.");
		else
			printf("Ȧ���Դϴ�.");
	}
	return 0;
}