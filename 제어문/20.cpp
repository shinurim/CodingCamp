#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int firstNum = 1, lastNum = 100;
	int guessNum = 0;
	int tryNum = 0;
	int randNum = 1 + rand() % 100;
	while (guessNum != randNum) {
		tryNum++;
		printf("%d���� %d������ ���� �Է��Ͻÿ� : ", firstNum, lastNum);
		scanf("%d", &guessNum);
		if (guessNum > randNum)
			lastNum = guessNum;
		else firstNum = guessNum;
	}
	printf("%d�� ���� ã�ҽ��ϴ�", tryNum);
	return 0;
}