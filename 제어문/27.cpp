#define _CRT_SECURE_NO_WARNINGS
#define MULORSUM(x,y) (x>y)? x*y : x+y
#include <stdio.h>

int main(void) {
	int x, y;
	printf("정수 두 개 입력\n");
	scanf("%d %d", &x, &y);
	printf("if else 사용 결과 = ");
	if (x > y)
		printf("%d\n", x * y);
	else printf("%d\n", x + y);
	printf("조건 연산자 사용 결과 = %d\n", MULORSUM(x, y));
}