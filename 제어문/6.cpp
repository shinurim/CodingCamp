#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;
	printf("x�� y�� �Է� : ");
	scanf("%d %d", &x, &y);
	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	printf("|x|+|y|= %d\n", x + y);
	return 0;
}