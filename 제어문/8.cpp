#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char k;
	int x, y;
	printf("(+,-,*,?,%)중의 하나의 기호와 두개의 정수를 입력하시오 :");
	scanf("%c %d %d", &k, &x, &y);
	switch (k) {
	case('+'):
		printf("%d + %d = %d\n", x, y, x + y);
		break;
	case('-'):
		printf("%d - %d = %d\n", x, y, x - y);
		break;
	case('*'):
		printf("%d * %d = %d\n", x, y, x * y);
		break;
	case('?'):
		printf("%d ? %d = %d\n", x, y, (x > y) ? x : y);
		break;
	case('%'):
		printf("%d %% %d = %d\n", x, y, x % y);
		break;
	default:
		printf("올바르지 않은 연산자 입니다\n");
		break;
	}
	return 0;
}