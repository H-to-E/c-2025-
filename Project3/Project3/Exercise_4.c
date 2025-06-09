#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int answer, ua, t;
	srand((unsigned)time(NULL));
	answer = rand() % 100;
	t = 0;

	do{
		printf("정답을 추측하시오:");
		scanf("%d", &ua);
		if (ua > answer)
			printf("HIGH\n");                                                      
		else if (ua <answer)
			printf("LOW\n");         
		t++;

	}while (ua != answer);
	printf("축하합니다! 시도횟수=%d", t);

	return 0;
}