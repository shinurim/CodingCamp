#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double average(float x, float y, float z) {
	double result = (x + y + z) / 3;
	return result;
}
int main(void) {
	int x, y, z;
	printf("세 개의 정수를 입력하시오 :");
	scanf("%d %d %d", &x, &y, &z);
	printf("average is %.3lf", average(x, y, z));
	return 0;
}