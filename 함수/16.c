#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	srand(time(NULL));
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = 1 + rand() % 10;
	}

	for (int i = 1; i <= 10; i++) {
		int often = 0;
		for (int j = 0; j < 10; j++) {
			if (i == arr[j])
				often++;
		}
		if (often > 0) {
			printf("%d:%d ", i, often);
		}
	}
}