#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int string_b(char* a) {
	return strlen(a);
}
int main(void) {
	char a[100];
	printf("���ڿ��� �Է��Ͻÿ�");
	gets(a);
	printf("���ڿ��� ���� %d", string_b(a));
}