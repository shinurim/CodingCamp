#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gugudan(int n) {
	for (int i = 1; i < 10; i++) {
		printf("%d * %d =%d\n", n, i, n * i);
	}
}
int main(void) {
	int n;
	printf("���ϴ� ���� �Է� >>");
	scanf("%d", &n);
	printf("\n");
	gugudan(n);
	return 0;
}