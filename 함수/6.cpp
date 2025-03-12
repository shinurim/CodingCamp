#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mid(int x, int y, int z) {
	int mid = (x > y) ? y : x;
	if (mid >= z) {
		return mid;
	}
	else {
		int bigger = (x > y) ? x : y;
		int mid = (bigger > z) ? z : bigger;
		return mid;
	}
}
int main(void) {
	int x, y, z;
	printf("세 숫자를 입력하시오 :");
	scanf("%d %d %d", &x, &y, &z);
	printf("중간 값은 %d", mid(x, y, z));
	return 0;
}