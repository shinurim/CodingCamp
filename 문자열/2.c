#include <stdio.h>

int main(void) {
	int i;
	char s[20];
	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets(s);

	for (i = 0; s[i] != '\0'; i++) {
		printf("%c", s[i]);
		if (s[i] == ' ') {
			printf("\nù��° ������ ã�ҽ��ϴ�.\n");
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