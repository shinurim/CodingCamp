#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int arr[100];
	printf("1~9 ³­¼ö 100°³");
	for (int i = 0; i < 100; i++) {
		if (i % 10 == 0) printf("\n");
		arr[i] = 1 + rand() % 9;
		printf("%2d", arr[i]);
	}
	printf("\n");

	for (int i = 1; i <= 9; i++) {
		int often = 0;
		for (int j = 0; j < 100; j++) {
			if (i == arr[j])
				often++;
		}
		printf("%d:%d ", i, often);
	}
}