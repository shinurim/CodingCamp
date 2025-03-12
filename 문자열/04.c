#include <stdio.h>

int main(void) {
	int i;
	char ID[20] = "Hansung";
	char ID1[20];
	char PW[20] = "computer";
	char PW1[20];
	printf("아이디 :");
	gets(ID1);
	for (i = 0; ID[i] != '\0'; i++) {
		if (ID[i] != ID1[i]) {
			printf("등록되지 않은 아이디 입니다");
			return 0;
		}
	}
	if (ID1[i] != '\0') {
		printf("등록되지 않은 아이디 입니다");
		return 0;
	}
	printf("비밀번호 :");
	gets(PW1);
	for (i = 0; PW[i] != '\0'; i++) {
		if (PW[i] != PW1[i]) {
			printf("you got wrong passworld");
			return 0;
		}
	}
	if (PW1[i] != '\0') {
		printf("you got wrong passworld");
		return 0;
	}
	else
		printf("Hansung님 환영합니다");
	return 0;
}
