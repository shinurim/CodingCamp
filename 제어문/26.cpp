#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 5; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 5; i >= 0; i--) {
		for (int j = i; j >= 0; j--) {
			printf("%d", j);
		}
		printf("\n");
	}
}