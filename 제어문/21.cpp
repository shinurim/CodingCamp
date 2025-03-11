#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	while (1) {
		srand(time(NULL));
		int x = rand() % 11;
		int y = rand() % 11;
		int z = rand() % 11;
		printf("%d %d %d\n", x, y, z);
		if ((x == y) && (y == z)) {
			printf("당첨! 축하드립니다!");
			return 0;
		}
		else {
			printf("다시 시도하십시오\n");
			_sleep(1000);
		}
	}
}