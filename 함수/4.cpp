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
	printf("���ڸ� �Է��Ͻÿ� :");
	scanf("%lf", &f);
	printf("�ݿø��մϴ� :%d", round(f));
}