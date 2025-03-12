#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x;
	printf("이진수를 입력하시오 :");
	scanf("%d", &x);
	int sum = 0;
	int m = 0;
	while (x > 0) {
		if (x % 10 == 0) {
			m++;
			x /= 10;
		}
		else {
			m++;
			if (m == 1) {
				sum += 1;
				x /= 10;
			}
			else {
				int n = 2;
				for (int i = 1; i < m - 1; i++) {
					n *= 2;
				}
				sum += n;
				x /= 10;
			}
		}
	}
	printf("10진수로의 변환 값은 %d\n", sum);
}
