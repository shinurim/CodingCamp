#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("���ڸ� �Է� :");
	scanf("%d", &num);
	printf("��� :");
	while (1) {
		int k = num % 10;
		num /= 10;
		printf("%d", k);
		if (num == 0)
			break;
	}
}