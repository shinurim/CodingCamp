#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int absolute(int abs);

int main(void) {
	int num1;
	printf("정수를 입력하고 Enter>");
	scanf("%d", &num1);

	printf("\n%d의 절대값 %d", num1, absolute(num1));
	return 0;
}
int absolute(int abs) {
	if (abs < 0)
		return -abs;
	else
		return abs;
}