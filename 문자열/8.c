#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct strLine {
	char line[100];
}strLine;

int main(void) {
	struct strLine str[10];
	int howlong[10];
	int j;
	printf("여러 줄에 원하는 문장을 입력하세요.\n");
	printf("입력이 다 되었으면 새로운 줄 처음에 exit 그리고 Enter를 입력하세요.\n");
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
	printf("가장 큰 문장 %s. 길이 %d 위치 %d", str[longest].line, strlen(str[longest].line), longest + 1);
}