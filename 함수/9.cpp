#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ffactorial(int n) {
	if (n == 1)
		return 1;
	return n * ffactorial(n - 1);
}
int main(void) {
	int num;
	printf("���ڸ� �Է��Ͻÿ� :");
	scanf("%d", &num);
	printf("%d! = %d", num, ffactorial(num));
}