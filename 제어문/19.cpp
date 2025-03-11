#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	for (int i = 1; i < 101; i++) {
		if ((i % 2) == 0)
			printf("%d ", i);
		else
			continue;
		if ((i % 10) == 0)
			printf("\n");
		else continue;
	}
}