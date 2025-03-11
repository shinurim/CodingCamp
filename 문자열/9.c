#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[20];
	printf("문자열 입력: ");
	gets(str);
	int len = strlen(str);
	printf("문자열길이 = %d\n", len);
	for (int i = len; i != 0; i--) {
		for (int j = 0; j < i; j++)
			printf("%c", str[j]);
		printf("\n");
	}
}