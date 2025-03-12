#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char x;
	while (1) {
		printf("문자를 입력하시오: ");
		x = getchar();
		if (x == '\n') {
			printf("프로그램을 종료합니다");
			return 0;
		}
		else
			printf("%c\n", x + 1);
		while (getchar() != '\n'); // 입력 버퍼에 남아있는 '\n' 제거
	}
}