#include <stdio.h>

int main(void) {
	float x, y;
	printf("두 개의 소수를 입력하시오: ");
	scanf("%f %f", &x, &y);
	printf("두 수의 합: %.2f\n", x + y);
	printf("두 수의 차: %.2f\n", x - y);
	printf("두 수의 곱: %.2f\n", x * y);
	return 0;
}