#include <stdio.h>

int main(void) {
	int k = 0;
	char s[20];
	char s1[20];
	printf("문자열을 입력하시오 : ");
	gets(s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] != ' ') {
			s1[k++] = s[i];
		}
		else	continue;
	}
	s1[k] = '\0';
	printf("%s", s1);
	printf("\n");
	return 0;
}