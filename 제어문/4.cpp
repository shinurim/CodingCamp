#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int rank;
	printf("��� �Դϱ� : ");
	scanf("%d", &rank);
	printf("%d�� : ", rank);
	switch (rank) {
	case(1):
		printf("����Ʈ ");
	case(2):
		printf("��ǻ�� ");
	case(3):
		printf("��� ");
	case(4):
		printf("���� ");
		break;
	default:
		printf("�� �� : ����");
		break;
	}
	printf("\n");
}