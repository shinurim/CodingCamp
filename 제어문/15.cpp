#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;
	printf("두 수를 입력\n");
	scanf("%d %d", &x, &y);
	(x > y) ? printf("합 : %d", x + y) : printf("곱 : %d", x * y);
	return 0;
}