#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fself(int n) {
	static int k = 1, sum=0;
	if (n == 0) {
		printf("\nsum =%d",sum);
		return 0;
	}
	sum += k;
	printf("%d", k++);
	fself(n - 1);
}
int main(void) {
	int n;
	printf("숫자를 입력하시오 :");
	scanf("%d", &n);
	fself(n);
}
