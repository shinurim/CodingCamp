#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void gugudan() {
	printf("%d * %d = ?\n", 1 + rand() % 9, 1 + rand() % 9);
}
int main(void) {
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		printf("%d) ", i + 1);
		gugudan();
	}
}