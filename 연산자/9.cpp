#include <stdio.h>

int main(void) {
	int price;
	printf("�ݾ��� �Է� : ");
	scanf("%d", &price);
	printf("5����: %d\n", price / 50000);
	price %= 50000;
	printf("1����: %d\n", price / 10000);
	price %= 10000;
	printf("5õ��: %d\n", price / 5000);
	price %= 5000;
	printf("1õ��: %d\n", price / 1000);
	price %= 1000;
	printf("500��: %d\n", price / 500);
	price %= 500;
	printf("100��: %d\n", price / 100);
	price %= 100;
	printf("50��: %d\n", price / 50);
	price %= 50;
	printf("10��: %d\n", price / 10);
	price %= 10;
	printf("5��: %d\n", price / 5);
	price %= 5;
	printf("1��: %d\n", price / 1);
	return 0;
}