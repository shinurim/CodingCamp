#include <stdio.h>

int main(void) {
	float m, km;
	printf("마일을 킬로미터로 변환\n");
	printf("마일의 값을 입력하시오: ");
	scanf("%f", &m);
	km = m * 1.60935;
	printf("%.5f -> %.5f\n", m, km);
	return 0;
}
