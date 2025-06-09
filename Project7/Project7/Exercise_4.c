#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int arr[5];
int find_2() {
	int one = arr[0];
	int two = 0;
	for (int i = 0;i < 5;i++) {
		if (arr[i] > one) {
			two = one;
			one = arr[i];
		}
		else if (arr[i] > two && arr[i] < one) 
			two = arr[i];
		
	}
	return two;

}


int main(void) {
	printf("정수 5개를 입력하세요:");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	int two = find_2();
	printf("%d", two);
}