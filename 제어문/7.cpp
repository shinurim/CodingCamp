#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int k = 1;
	int total = 0;
	printf("��� : %d���� ", k);
	while (1) {
		total += k;
		if (total > 1000) break;
		k++;
	}
	total -= k--;
	printf("%d������ ���� %d�Դϴ�.\n", k, total);
}