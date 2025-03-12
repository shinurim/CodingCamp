#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n) {
	int result = 1;
	for (int i = n; i > 0; i--) {
		result *= i;
	}
	return result;
}
int main(void) {
	int n;
	int sum = 0;
	printf("정수를 입력하시오 :");
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		printf("%d!:%d ", i, factorial(i));
		sum += factorial(i);
	}
	printf("\nsum = %d", sum);
	return 0;
}
