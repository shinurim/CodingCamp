#include <stdio.h>

int main(void) {
	int apple, box;
	printf("사과수 입력 : ");
	scanf("%d", &apple);
	if (apple % 20 != 0) {
		box = apple / 20;
		printf("상자 수 = %d\n", ++box);
	}
	else printf("상자 수 = %d\n", apple / 20);
	return 0;
}
