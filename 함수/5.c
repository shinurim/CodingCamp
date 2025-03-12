#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[100];
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (islower(str[i]) == 0)
			printf("%c", tolower(str[i]));
		else printf("%c", toupper(str[i]));
	}
}