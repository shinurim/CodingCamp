#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void repeat(char c, int n) {
	for (int i = 0; i < n; i++)
		printf("%c", c);
}
int main(void) {
	char c; int n;
	printf("�Է��ϰ� ���� ���ڿ� ������ �Է��Ͻÿ� :");
	scanf("%c %d", &c, &n);
	repeat(c, n);
}