#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str1[10];
	char str2[10];
	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
	gets(str1);
	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
	gets(str2);
	if ((islower(str1[0]) == 0 && islower(str2[0]) == 0) || (islower(str1[0]) != 0 && islower(str2[0]) != 0)) {
		if ((int)str1[0] > (int)str2[0])
			printf("%s�� %s���� �� ū ���ڿ��Դϴ�", str1, str2);
		else {
			printf("%s�� %s���� �� ū ���ڿ��Դϴ�", str2, str1);
		}
	}
	else if ((islower(str1[0]) == 0 && islower(str2[0]) != 0)) {
		if ((int)str1[0] + 32 > (int)str2[0])
			printf("%s�� %s���� �� ū ���ڿ��Դϴ�", str1, str2);
		else {
			printf("%s�� %s���� �� ū ���ڿ��Դϴ�", str2, str1);
		}
	}
	else {
		if ((int)str1[0] > (int)str2[0] + 32)
			printf("%s�� %s���� �� ū ���ڿ��Դϴ�", str1, str2);
		else {
			printf("%s�� %s���� �� ū ���ڿ��Դϴ�", str2, str1);
		}
	}
}