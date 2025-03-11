#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str1[10];
	char str2[10];
	printf("첫 번째 문자열을 입력하세요 : ");
	gets(str1);
	printf("두 번째 문자열을 입력하세요 : ");
	gets(str2);
	if ((islower(str1[0]) == 0 && islower(str2[0]) == 0) || (islower(str1[0]) != 0 && islower(str2[0]) != 0)) {
		if ((int)str1[0] > (int)str2[0])
			printf("%s이 %s보다 더 큰 문자열입니다", str1, str2);
		else {
			printf("%s이 %s보다 더 큰 문자열입니다", str2, str1);
		}
	}
	else if ((islower(str1[0]) == 0 && islower(str2[0]) != 0)) {
		if ((int)str1[0] + 32 > (int)str2[0])
			printf("%s이 %s보다 더 큰 문자열입니다", str1, str2);
		else {
			printf("%s이 %s보다 더 큰 문자열입니다", str2, str1);
		}
	}
	else {
		if ((int)str1[0] > (int)str2[0] + 32)
			printf("%s이 %s보다 더 큰 문자열입니다", str1, str2);
		else {
			printf("%s이 %s보다 더 큰 문자열입니다", str2, str1);
		}
	}
}