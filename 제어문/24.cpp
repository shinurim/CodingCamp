#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("숫자를 입력 :");
	scanf("%d", &num);
	printf("결과 :");
	while (1) {
		int k = num % 10;
		num /= 10;
		printf("%d", k);
		if (num == 0)
			break;
	}
}