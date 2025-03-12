#include <stdio.h>

int main(void) {
	float x, y;
	printf("밑변, 높이 :");
	scanf("%f %f", &x, &y);
	printf("밑변=%.2fcm, 높이=%.2fcm인 삼각형의 면적= %.2fcm²\n", x, y, (x * y) / 2);
	return 0;
}
