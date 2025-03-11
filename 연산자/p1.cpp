#include <stdio.h>

int main(void) {
	int x, y, z;
	printf("세 개의 정수를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);
	if (x >= y) {
		y = x;
		if (z >= y) {
			y = z;
		}
	}
	else {
		if (z >= y) {
			y = z;
		}
	}
	printf("가장 큰 수: %d\n", y);
	return 0;
}