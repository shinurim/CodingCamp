#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	printf("���� ������ �Է� : ");
	scanf("%d", &n);
	while (n) {
		if (n % 2 != 0)
			printf("%d ", n);
		n--;
	}
	return 0;
}