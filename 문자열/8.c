#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct strLine {
	char line[100];
}strLine;

int main(void) {
	struct strLine str[10];
	int howlong[10];
	int j;
	printf("���� �ٿ� ���ϴ� ������ �Է��ϼ���.\n");
	printf("�Է��� �� �Ǿ����� ���ο� �� ó���� exit �׸��� Enter�� �Է��ϼ���.\n");
	for (j = 0; j < 10; j++) {
		gets(str[j].line);
		if (strcmp(str[j].line, "exit") == 0)
			break;
	}
	for (int i = 0; i < j; i++) {
		howlong[i] = strlen(str[i].line);
	}
	int longest = 0;
	for (int i = 1; i < j; i++) {
		if (howlong[longest] < howlong[i])
			longest = i;
		else continue;
	}
	printf("���� ū ���� %s. ���� %d ��ġ %d", str[longest].line, strlen(str[longest].line), longest + 1);
}