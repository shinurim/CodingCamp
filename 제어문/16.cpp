#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* k;
	int total = 0;
	k = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++) {
		k[i] = 0;
		for (int j = 1; j <= i + 1; j++) {
			k[i] += j;
		}
		total += k[i];
		printf("%d ", k[i]);
	}
	printf("\nsum = %d ", total);
	free(k);
	return 0;
}