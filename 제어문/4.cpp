#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int rank;
	printf("몇등 입니까 : ");
	scanf("%d", &rank);
	printf("%d등 : ", rank);
	switch (rank) {
	case(1):
		printf("프린트 ");
	case(2):
		printf("컴퓨터 ");
	case(3):
		printf("상금 ");
	case(4):
		printf("상패 ");
		break;
	default:
		printf("그 외 : 없음");
		break;
	}
	printf("\n");
}