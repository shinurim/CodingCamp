#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char x;
	while (1) {
		printf("���ڸ� �Է��Ͻÿ�: ");
		x = getchar();
		if (x == '\n') {
			printf("���α׷��� �����մϴ�");
			return 0;
		}
		else
			printf("%c\n", x + 1);
		while (getchar() != '\n'); // �Է� ���ۿ� �����ִ� '\n' ����
	}
}