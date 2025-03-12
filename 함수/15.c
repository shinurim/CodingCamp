#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int str_reverse(char* s) {
	static k = 1;
	printf("%c", s[strlen(s) - k]);
	if (strlen(s) == k) return 0;
	k++;
	str_reverse(s);
}
int main() {
	printf("Hello\n역으로 출력 >> ");
	str_reverse("Hello");
}