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
	printf("���ڿ��� �Է��Ͻÿ�\n");
	gets(a); gets(b);
	printf("���ڿ� ���� :");
	string_connect(a, b, c);
}