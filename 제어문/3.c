#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[20];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(s);
	printf("\"%s\"�� ���̴� %d�̴�\n", s, strlen(s));
	return 0;
}