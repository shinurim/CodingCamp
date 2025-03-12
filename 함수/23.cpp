#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(void) {
	srand(time(NULL));
	1000 + rand() % 8999 + 1;
	printf("복권추첨을 시작합니다.\n");
	printf("준비되었으면 아무키나 누르세요.\n");
	printf("아무키나 누르면 번호가 출력됩니다.\n\n");
	system("pause");
	system("cls");
	printf("천백십일\n");
	printf("%6d\n", 1000 + rand() % 8999 + 1);
	printf("당첨번호를 확인하세요.\n");
}