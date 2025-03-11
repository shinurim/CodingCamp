#include <stdio.h>

int main(void) {
	int price;
	printf("금액을 입력 : ");
	scanf("%d", &price);
	printf("5만원: %d\n", price / 50000);
	price %= 50000;
	printf("1만원: %d\n", price / 10000);
	price %= 10000;
	printf("5천원: %d\n", price / 5000);
	price %= 5000;
	printf("1천원: %d\n", price / 1000);
	price %= 1000;
	printf("500원: %d\n", price / 500);
	price %= 500;
	printf("100원: %d\n", price / 100);
	price %= 100;
	printf("50원: %d\n", price / 50);
	price %= 50;
	printf("10원: %d\n", price / 10);
	price %= 10;
	printf("5원: %d\n", price / 5);
	price %= 5;
	printf("1원: %d\n", price / 1);
	return 0;
}