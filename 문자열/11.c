#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[20];
	printf("�Է�: ");
	gets(str);
	printf("���: ");
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == str[i + 1]) {
			continue;
		}
		else {
			printf("%c", str[i]);
		}
	}
	return 0;
}