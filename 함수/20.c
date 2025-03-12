#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void string_connect(char a[], char b[], char c[]) {
	int i;
	int length = strlen(a);
	for (i = 0; i <= strlen(b); i++) {
		a[i + length] = b[i];
	}
	for (i = 0; i <= strlen(a); i++) {
		c[i] = a[i];
	}
	printf("%s\n", c);
}
int main(void) {
	char a[100], b[100], c[100];
	printf("문자열을 입력하시오\n");
	gets(a); gets(b);
	printf("문자열 연결 :");
	string_connect(a, b, c);
}