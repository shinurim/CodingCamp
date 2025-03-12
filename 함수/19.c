#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void string_copy(char a[], char b[]) {
	int i;
	for (i = 0; i < strlen(a); i++) {
		b[i] = a[i];
	}
	b[i] = '\0';
	printf("%s\n", b);
}
int main(void) {
	char a[100], b[100];
	printf("문자열을 입력하시오\n");
	gets(a);
	printf("문자열 복사 :");
	string_copy(a, b);
}