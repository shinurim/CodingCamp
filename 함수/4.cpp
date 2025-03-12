#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int round(double f) {
	double k = f;
	if (f - (int)k >= 0.5) {
		f += 0.5;
	}
	return (int)f;
}
int main(void) {
	double f;
	printf("숫자를 입력하시오 :");
	scanf("%lf", &f);
	printf("반올림합니다 :%d", round(f));
}