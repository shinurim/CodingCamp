#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
	char str1[100];
	char str2[100];
	printf("문자을 입력하시오 :");
	gets(str1);
	int k = 0;
	int n = 0;
	for (int i = strlen(str1)-1; i >= 0; i--) {
		if (str1[i] == ' ') {
			int j = i;
			while (n--) {
				str2[k++] = str1[++i];
			}
			i = j;
			str2[k++] = ' ';
			n = -1;
		}
			n++;
	}
	for (int i = 0; i <= n; i++) {
		str2[k++]=str1[i];
	}
	str2[k] = '\0';
	printf("%s", str2);
}