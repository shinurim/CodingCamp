#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void) {
	char str1[] = "�Ѽ����б�";
	char str2[] = "��ǻ�Ͱ��а�";
	char str3[100];
	strcpy(str3, str1);
	printf("(1)str3=%s\n", str3);
	strcat(str3, str2);
	printf("(2)str3=%s\n", str3);
}