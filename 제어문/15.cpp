#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;
	printf("�� ���� �Է�\n");
	scanf("%d %d", &x, &y);
	(x > y) ? printf("�� : %d", x + y) : printf("�� : %d", x * y);
	return 0;
}