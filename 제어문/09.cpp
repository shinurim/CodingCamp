#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 1;
	int x, y;
	while (i <= 100) {
		x = i % 10;
		y = i / 10;
		if (x == 3 || x == 6 || x == 9) {
			printf("¦");
			if (y == 3 || y == 6 || y == 9)
				printf("¦ ");
			else printf(" ");
		}
		else 		printf("%d ", i);
		if (i % 10 == 0)
			printf("\n");
		i++;
	}
	return 0;
}
