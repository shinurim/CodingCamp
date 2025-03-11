#include <stdio.h>
#include <ctype.h>

int main(void) {
	char s[10];
	printf("문자열을 입력하시오 : ");
	gets(s);
	for (int i = 0; s[i] != NULL; i++) {
		if (isupper(s[i])) {
			s[i] = tolower(s[i]);
		}
		else {
			s[i] = toupper(s[i]);
		}
		printf("%c", s[i]);
	}
	return 0;
}
