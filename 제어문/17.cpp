#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int k;
	printf("1���� ū ���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &k);
	printf("�Է��� %d", k);
	for (int i = 2; i < k; i++) {
		if (k == 1 || k == 2 || k == 3) {
			printf("�� �Ҽ��Դϴ�");
			return 0;
		}
		else if ((k % i) == 0) {
			printf("�� �Ҽ��� �ƴմϴ�");
			return 0;
		}
	}
	printf("�� �Ҽ��Դϴ�");
	return 0;
}