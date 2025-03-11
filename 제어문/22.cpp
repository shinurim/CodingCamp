#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int k = 0;
	do {
		k++;
		printf("수식입력 : ");
		int x, y; char z;
		scanf("%d", &x);	scanf("%c", &z);	scanf("%d", &y);
		switch (z) {
		case('+'):
			printf("%d + %d = %d\n", x, y, x + y);
			break;
		case('-'):
			printf("%d - %d = %d\n", x, y, x - y);
			break;
		case('*'):
			printf("%d + %d = %d\n", x, y, x * y);
			break;
		case('/'):
			printf("%d / %d = %d\n", x, y, x / y);
			break;
		}
	} while (k != 4);
	return 0;
}