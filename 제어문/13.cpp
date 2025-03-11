#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int sum = 100, submit;
	while (1) {
		printf("sum= %d »¬ °ª ÀÔ·Â: ", sum);
		scanf("%d", &submit);
		if ((sum -= submit) == 0) {
			printf("sum= %d", sum);
			return 0;
		}
	}
}