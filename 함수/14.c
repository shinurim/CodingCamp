#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	srand(time(NULL));
	int arr[100];
	for (int i = 0; i < 100; i++)
		arr[i] = 1 + rand() % 10;
	int max = arr[0];
	int often = 1;
	for (int i = 1; i < 100; i++) {
		if (max < arr[i]) {
			max = arr[i];
			often = 1;
		}
		else if (max == arr[i])
			often++;
	}
	printf("%d가 %d번 출력되었습니다.\n", max, often);
}