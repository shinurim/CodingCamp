#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int sum = 100, submit;
	while (1) {
		printf("sum= %d 뺄 값 입력: ", sum);
		scanf("%d", &submit);
		if ((sum -= submit) == 0) {
			printf("sum= %d", sum);
			return 0;
		}
	}
}
