#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, r;
	printf("�� ���� �ڿ����� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);
	if (x < y) {
		int k;
		k = x; x = y; y = k;
	}
	while (1) {
		if (y == 0) {
			printf("�ִ����� %d", x);
			return 0;
		}
		r = x % y;
		x = y;
		y = r;
	}
}