#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[6];

int  check() {
	for (int i = 0;i < 6;i++) {
		for (int j = i+1;j <6;j++) {
			if (arr[i] == arr[j])
				return 0;
		}
	}
	return 1;

}
void print_arr() {
	for (int i = 0;i < 6;i++) {
		printf("%d ",arr[i]);
	}
}

int main(void) {
	srand((unsigned)time(NULL));
	int nos = -1;
	while (nos != 1) {
		for (int i = 0;i < 6;i++) {
			arr[i] = rand() % 45;
		}
		nos = check();
	}
	printf("로또 번호 생성");
	print_arr();
}