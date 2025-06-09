#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	int arr[3][3];
	void print_arr(a) {
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main(void) {

	printf("3x3 배열의 요소를 입력하세요:\n");
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			printf("arr[%d][%d]=", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	print_arr(arr);
}