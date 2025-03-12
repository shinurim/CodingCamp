#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int string_b(char* a) {
	return strlen(a);
}
int main(void) {
	char a[100];
	printf("문자열을 입력하시오");
	gets(a);
	printf("문자열의 길이 %d", string_b(a));
}