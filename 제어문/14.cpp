#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, sum = 0;
	printf("���� ���� �Է� : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i += 2)
		sum += i;
	printf("1 ~ %d Ȧ �� �� = %d", n, sum);
	return 0;
}