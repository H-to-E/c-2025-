#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score;
	char c;
	printf("점수를 입력하시오 (0~100):");
	scanf("%d", &score);
	
	if (score < 0 || score>100)
		printf("0에서 100사이의 수를 입력해주세요.");
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

		printf("이 점수의 등급은 %c 입니다", c);
	}
	return 0;

}		
