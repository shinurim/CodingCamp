#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int x) {
	int total = 0;
	for (int i = 1; i <= x; i++)
		total += i;
	return total;
}
int main(void) {
	int x; 
	printf("양의 정수를 입력 : ");
	scanf("%d", &x);
	printf("%d\n", sum(x));
	return 0;
}
