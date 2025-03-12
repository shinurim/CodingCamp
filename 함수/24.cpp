#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x;
	int num[10];
	printf("십진수를 입력하시오 :");
	scanf("%d", &x);
	int i = 0;
	while (x > 1) {
		num[i++] = x % 2;
		x /= 2;
	}
	num[i] = x;
	for (i; i >= 0; i--)
		printf("%d", num[i]);
}