#include <stdio.h>

int main(void) {
	float m, km;
	printf("������ ų�ι��ͷ� ��ȯ\n");
	printf("������ ���� �Է��Ͻÿ�: ");
	scanf("%f", &m);
	km = m * 1.60935;
	printf("%.5f -> %.5f\n", m, km);
	return 0;
}