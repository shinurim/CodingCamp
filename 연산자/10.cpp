#include <stdio.h>

int main(void) {
	int x;
	int k = 0;
	printf("정수입력: ");
	scanf("%d", &x);
	while (x >= 10) {
		x /= 10;
		k++;
	}
	printf("자리수 = %d\n", ++k);
}
