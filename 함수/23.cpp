#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(void) {
	srand(time(NULL));
	1000 + rand() % 8999 + 1;
	printf("������÷�� �����մϴ�.\n");
	printf("�غ�Ǿ����� �ƹ�Ű�� ��������.\n");
	printf("�ƹ�Ű�� ������ ��ȣ�� ��µ˴ϴ�.\n\n");
	system("pause");
	system("cls");
	printf("õ�����\n");
	printf("%6d\n", 1000 + rand() % 8999 + 1);
	printf("��÷��ȣ�� Ȯ���ϼ���.\n");
}