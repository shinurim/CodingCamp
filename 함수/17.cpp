#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double function(double n);

int main() {
	int n;
	printf("숫자를 입력하시오 >> ");
	scanf("%d", &n);
	printf("%lf", function(n));
	return 0;
}
double function(double n) {
	if (n == 1) {
		printf("1 = ");
		return 1;
	}
	printf("1/%d + ", (int)n);
	return (1 / n) + function(n - 1);
}