#include <stdio.h>

int main(void) {
	float x, y;
	printf("�غ�, ���� :");
	scanf("%f %f", &x, &y);
	printf("�غ�=%.2fcm, ����=%.2fcm�� �ﰢ���� ����= %.2fcm��\n", x, y, (x * y) / 2);
	return 0;
}