#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			if (10 * i + j + 10 * j + i == 154) {
				printf("i = %d, j = %d\n", i, j);
			}
		}
	}
}