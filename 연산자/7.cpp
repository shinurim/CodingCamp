#include <stdio.h>

int main(void) {
	int apple, box;
	printf("����� �Է� : ");
	scanf("%d", &apple);
	if (apple % 20 != 0) {
		box = apple / 20;
		printf("���� �� = %d\n", ++box);
	}
	else printf("���� �� = %d\n", apple / 20);
	return 0;
}