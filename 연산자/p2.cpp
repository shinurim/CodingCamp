#include <stdio.h>

int main(void) {
	float x, y;
	printf("�� ���� �Ҽ��� �Է��Ͻÿ�: ");
	scanf("%f %f", &x, &y);
	printf("�� ���� ��: %.2f\n", x + y);
	printf("�� ���� ��: %.2f\n", x - y);
	printf("�� ���� ��: %.2f\n", x * y);
	return 0;
}