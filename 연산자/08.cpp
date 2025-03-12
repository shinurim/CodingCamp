#include <stdio.h>

int main(void) {
	int x;
	int y[4];
	scanf("%d", &x);
	for (int i = 0; i < 4; i++) {
		static int k = 1000;
		y[i] = x / k;
		x %= k;
		k /= 10;
	}
	printf("%d+%d+%d+%d=%d\n", y[0], y[1], y[2], y[3], y[0] + y[1] + y[2] + y[3]);
	return 0;
}
