#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	char str1[100];	char str2[100];	char str3[100];	char str4[100];	char temp[100];
	int len1, len2, len3, len4;

	printf("(1) �Է� str1: ");
	scanf("%s", str1);
	printf("    �Է� str2: ");
	scanf("%s", str2);
	strcpy(temp, str1);	strcpy(str1, str2);	strcpy(str2, temp);	//��ȯ
	printf("(2) ��ȯ str1: %s str2: %s\n", str1, str2);
	printf("len1=%d len2=%d\n", strlen(str1), strlen(str2));	//��ȯ ����
	strcpy(str3, str2);		//����
	printf("(3) ���� str3: %s\n", str3);
	strcat(str3, " "); strcat(str3, str1);  strcat(str3, " Computer Engineering");
	printf("(4) �̾� ���̱� str3: %s\n", str3);
	printf("len3=%d\n", strlen(str3));
	int j = 0;
	for (int i = strlen(str3) - 1; i != 0; i--) {
		str4[j++] = str3[i];
	}
	str4[j++] = str3[0];
	str4[j] = NULL;
	printf("(5) ������ str4: %s\n", str4);
	printf("len4=%d\n", strlen(str4));
}