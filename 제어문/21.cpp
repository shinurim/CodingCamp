#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	while (1) {
		srand(time(NULL));
		int x = rand() % 11;
		int y = rand() % 11;
		int z = rand() % 11;
		printf("%d %d %d\n", x, y, z);
		if ((x == y) && (y == z)) {
			printf("��÷! ���ϵ帳�ϴ�!");
			return 0;
		}
		else {
			printf("�ٽ� �õ��Ͻʽÿ�\n");
			_sleep(1000);
		}
	}
}