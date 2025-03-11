#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[20];
	printf("문자열을 입력하시오: ");
	gets(s);
	printf("\"%s\"의 길이는 %d이다\n", s, strlen(s));
	return 0;
}