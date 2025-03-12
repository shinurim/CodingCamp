#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ffactorial(int n) {
	if (n == 1)
		return 1;
	return n * ffactorial(n - 1);
}
int main(void) {
	int num;
	printf("숫자를 입력하시오 :");
	scanf("%d", &num);
	printf("%d! = %d", num, ffactorial(num));
}
