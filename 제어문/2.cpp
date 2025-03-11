#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	printf("양의 정수를 입력 : ");
	scanf("%d", &n);
	while (n) {
		if (n % 2 != 0)
			printf("%d ", n);
		n--;
	}
	return 0;
}