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
	printf("정수를 입력하시오 :");
	scanf("%d", &n);
	printf("factorial(%d) = %d", n, factorial(n));
	return 0;
}
