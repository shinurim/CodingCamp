#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int absolute(int abs);

int main(void) {
	int num1;
	printf("������ �Է��ϰ� Enter>");
	scanf("%d", &num1);

	printf("\n%d�� ���밪 %d", num1, absolute(num1));
	return 0;
}
int absolute(int abs) {
	if (abs < 0)
		return -abs;
	else
		return abs;
}