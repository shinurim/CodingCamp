#include <stdio.h>

int main(void) {
	int i;
	char s[20];
	printf("문자열을 입력하시오 : ");
	gets(s);

	for (i = 0; s[i] != '\0'; i++) {
		printf("%c", s[i]);
		if (s[i] == ' ') {
			printf("\n첫번째 공백을 찾았습니다.\n");
			i++;
			break;
		}
	}
	for (; s[i] != '\0'; i++) {
		printf("%c", s[i]);
	}
	printf("\n");
	return 0;
}