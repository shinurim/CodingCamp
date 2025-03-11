#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ffor(); int fwhile(); int fdowhile(); int fbyself(int i);

int main(void) {
	printf("(1)for 문을 이용하여 작성 ");
	printf("sum=%d\n", ffor());
	printf("(2)while 문을 이용하여 작성 ");
	printf("sum=%d\n", fwhile());
	printf("(3)do - while 문을 이용하여 작성 ");
	printf("sum=%d\n", fdowhile());
	printf("(4)재귀 함수 이용 ");
	printf("sum=%d\n", fbyself(100));
	return 0;
}
int ffor() {
	int total = 0;
	for (int i = 1; i <= 100; i++)
		total += i;
	return total;
}
int fwhile() {
	int total = 0, i = 1;
	while (i <= 100) {
		total += i++;
	}
	return total;
}
int fdowhile() {
	int i = 1, total = 0;
	do {
		total += i++;
	} while (i <= 100);
	return total;
}
int fbyself(int i) {
	if (i == 0)
		return 0;
	return i + fbyself(i - 1);
}