#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int string_value(char* a);

int main(void) {
	int str[100];
	gets(str);
	printf("�������� %d", string_value(str));
}
int string_value(char* a) {
	int x = atoi(a);
	return x;
}