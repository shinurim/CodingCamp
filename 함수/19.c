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
	printf("���ڿ��� �Է��Ͻÿ�\n");
	gets(a);
	printf("���ڿ� ���� :");
	string_copy(a, b);
}