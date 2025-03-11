#include <stdio.h>
#include <ctype.h>

int main(void) {
	char PW[20];
	char PW1[20];
	int alpha, digit;
	printf("비밀번호를 등록합니다.\n");
A:  printf("비밀번호는 영문, 숫자 포함 최소한 8자리 이어야 합니다.\n");
	printf("새로운 비밀번호 입력 :");
	alpha = 0, digit = 0;
	int i = 0;
	scanf("%s", PW);
	for (; PW[i] != '\0'; i++) {
		if (isalpha(PW[i]) != 0) {
			alpha++;
		}
		else if (isdigit(PW[i]) != 0)
			digit++;
	}
	if (alpha == 0 || digit == 0||i<8)
		goto A;
	else {
		printf("비밀번호 한번 더 입력 :");
		scanf("%s", PW1);
		for (i = 0; PW[i] != '\0'; i++) {
			if (PW[i] != PW1[i]) { 
				printf("비밀번호를 정확히 입력하세요.\n");
				goto A;
			}
		}
		if (PW1[i] == '\0') {
			printf("비밀번호가 등록되었습니다\n");
			return 0;
		}
		else {
			printf("비밀번호를 정확히 입력하세요.\n");
			goto A;
		}
	}
}