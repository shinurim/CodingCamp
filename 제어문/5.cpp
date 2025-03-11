#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char ch1[20], ch2[20], ch3[20];
	printf("영문자 3개를 입력하시오: ");
	scanf("%s", ch1);
	scanf("%s", ch2);
	scanf("%s", ch3);
	if ((int)ch1[0] < (int)ch2[0]) {
		if ((int)ch1[0] < (int)ch3[0])
			printf("%s\n", ch1);
		else printf("%s\n", ch3);
	}
	else {
		if ((int)ch2[0] < (int)ch3[0])
			printf("%s\n", ch2);
		else printf("%s\n", ch3);
	}
}