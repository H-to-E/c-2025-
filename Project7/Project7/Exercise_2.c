#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[3][3];

void calulate_arr() {
	for (int i = 0;i < 2;i++) {
		arr[i][2] = arr[i][0] + arr[i][1];
	}
	for (int j = 0;j < 2;j++) {
		arr[2][j] = arr[0][j] + arr[1][j];
	}

}
int print_arr() {
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j ++ ) {
			if (i == 2 && j == 2)
				break;
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

}

int main(void) {
	printf("2x2배열의 요소를 입력하세요:\n");
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 2;j++) {
			printf("arr[%d][%d]=", i, j);
			scanf("%d", &arr[i][j]);
			
		}
	}
	calulate_arr();
	print_arr();
}