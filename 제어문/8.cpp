#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char k;
	int x, y;
	printf("(+,-,*,?,%)���� �ϳ��� ��ȣ�� �ΰ��� ������ �Է��Ͻÿ� :");
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
		printf("�ùٸ��� ���� ������ �Դϴ�\n");
		break;
	}
	return 0;
}