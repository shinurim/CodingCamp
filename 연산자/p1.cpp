#include <stdio.h>

int main(void) {
	int x, y, z;
	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);
	if (x >= y) {
		y = x;
		if (z >= y) {
			y = z;
		}
	}
	else {
		if (z >= y) {
			y = z;
		}
	}
	printf("���� ū ��: %d\n", y);
	return 0;
}