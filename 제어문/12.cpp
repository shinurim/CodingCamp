#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int sum = 0, add;
	while (1) {
		printf("sum= %d ���� �� �Է�: ", sum);
		scanf("%d", &add);
		if ((sum += add) == 100) {
			printf("sum= %d", sum);
			return 0;
		}
	}
}