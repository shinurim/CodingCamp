#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fself(int n) {
	if (n == 0)
		return 0;
	return n + fself(n - 1);
}
int main(void) {
	int n;
	printf("���ڸ� �Է��Ͻÿ� = ");
	scanf("%d", &n);
	printf("1���� %d������ �� %d\n", n, fself(n));
}