#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score;
	char c;
	printf("������ �Է��Ͻÿ� (0~100):");
	scanf("%d", &score);
	
	if (score < 0 || score>100)
		printf("0���� 100������ ���� �Է����ּ���.");
	else
	{
		if (score >= 81)
			c = 'A';
		else if (score >= 61)
			c = 'B';
		else if (score >= 41)
			c = 'C';
		else if (score >= 21)
			c = 'D';
		else
			c = 'E';

		printf("�� ������ ����� %c �Դϴ�", c);
	}
	return 0;

}		
