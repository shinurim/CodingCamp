#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int k;
	printf("1보다 큰 양의 정수를 입력하시오 : ");
	scanf("%d", &k);
	printf("입력한 %d", k);
	for (int i = 2; i < k; i++) {
		if (k == 1 || k == 2 || k == 3) {
			printf("은 소수입니다");
			return 0;
		}
		else if ((k % i) == 0) {
			printf("은 소수가 아닙니다");
			return 0;
		}
	}
	printf("은 소수입니다");
	return 0;
}