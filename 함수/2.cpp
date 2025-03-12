#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void star(int n) {
	for (int i = 0; i < n; i++)
		printf("*");
}
int main(void) {
	star(1); printf("\n");
	star(2); printf("\n");
	star(3); printf("\n");
}