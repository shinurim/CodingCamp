#include <stdio.h>
#include <ctype.h>

int main(void) {
	char s[10];
	printf("���ڿ��� �Է��Ͻÿ� : ");
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