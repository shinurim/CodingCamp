#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
typedef struct Alphabet {
	char alphabet;
	int often;
}Alphabet;
int main() {
	Alphabet alphabet[26];
	char arr[100];
	int k = 0;
	for (int i = 65; i < 91; i++) {
		alphabet[k].alphabet = (char)i;
		alphabet[k++].often = 0;
	}
	printf("문장입력: ");
	gets(arr);
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < strlen(arr); j++) {
			if (isupper(arr[j]) != 0) {
				if (alphabet[i].alphabet == arr[j])
					alphabet[i].often++;
			}
			else {
				if (alphabet[i].alphabet == toupper(arr[j]))
					alphabet[i].often++;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		if (i % 10 == 0)	printf("\n");
		printf("%c: %d ", alphabet[i].alphabet, alphabet[i].often);
	}
	printf("\n");
}