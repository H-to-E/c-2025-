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
		printf("������ �����Ͻÿ�:");
		scanf("%d", &ua);
		if (ua > answer)
			printf("HIGH\n");                                                      
		else if (ua <answer)
			printf("LOW\n");         
		t++;

	}while (ua != answer);
	printf("�����մϴ�! �õ�Ƚ��=%d", t);

	return 0;
}