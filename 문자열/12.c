#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char str1[100];	char str2[100];	char str3[100];	char str4[100];	char temp[100];
	int len1, len2, len3, len4;

	printf("(1) 입력 str1: ");
	scanf("%s", str1);
	printf("    입력 str2: ");
	scanf("%s", str2);
	strcpy(temp, str1);	strcpy(str1, str2);	strcpy(str2, temp);	//교환
	printf("(2) 교환 str1: %s str2: %s\n", str1, str2);
	printf("len1=%d len2=%d\n", strlen(str1), strlen(str2));	//교환 길이
	strcpy(str3, str2);		//복사
	printf("(3) 복사 str3: %s\n", str3);
	strcat(str3, " "); strcat(str3, str1);  strcat(str3, " Computer Engineering");
	printf("(4) 이어 붙이기 str3: %s\n", str3);
	printf("len3=%d\n", strlen(str3));
	int j = 0;
	for (int i = strlen(str3) - 1; i != 0; i--) {
		str4[j++] = str3[i];
	}
	str4[j++] = str3[0];
	str4[j] = NULL;
	printf("(5) 뒤집기 str4: %s\n", str4);
	printf("len4=%d\n", strlen(str4));
}