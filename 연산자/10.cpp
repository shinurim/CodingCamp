#include <stdio.h>

int main(void) {
	int x;
	int k = 0;
	printf("�����Է�: ");
	scanf("%d", &x);
	while (x >= 10) {
		x /= 10;
		k++;
	}
	printf("�ڸ��� = %d\n", ++k);
}