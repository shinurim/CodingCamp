#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int k = 1;
	int total = 0;
	printf("출력 : %d부터 ", k);
	while (1) {
		total += k;
		if (total > 1000) break;
		k++;
	}
	total -= k--;
	printf("%d까지의 합은 %d입니다.\n", k, total);
}