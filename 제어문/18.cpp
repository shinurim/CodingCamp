#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, r;
	printf("두 개의 자연수를 입력하시오: ");
	scanf("%d %d", &x, &y);
	if (x < y) {
		int k;
		k = x; x = y; y = k;
	}
	while (1) {
		if (y == 0) {
			printf("최대공약수 %d", x);
			return 0;
		}
		r = x % y;
		x = y;
		y = r;
	}
}