#define _CRT_SECURE_NO_WARNINGS
#define MULORSUM(x,y) (x>y)? x*y : x+y
#include <stdio.h>

int main(void) {
	int x, y;
	printf("���� �� �� �Է�\n");
	scanf("%d %d", &x, &y);
	printf("if else ��� ��� = ");
	if (x > y)
		printf("%d\n", x * y);
	else printf("%d\n", x + y);
	printf("���� ������ ��� ��� = %d\n", MULORSUM(x, y));
}