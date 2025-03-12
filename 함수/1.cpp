#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fself(int n) {
	if (n == 0)
		return 0;
	return n + fself(n - 1);
}
int main(void) {
	int n;
	printf("숫자를 입력하시오 = ");
	scanf("%d", &n);
	printf("1부터 %d까지의 합 %d\n", n, fself(n));
}