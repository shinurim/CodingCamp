#include <stdio.h>

int main(void) {
	int i;
	char ID[20] = "Hansung";
	char ID1[20];
	char PW[20] = "computer";
	char PW1[20];
	printf("���̵� :");
	gets(ID1);
	for (i = 0; ID[i] != '\0'; i++) {
		if (ID[i] != ID1[i]) {
			printf("��ϵ��� ���� ���̵� �Դϴ�");
			return 0;
		}
	}
	if (ID1[i] != '\0') {
		printf("��ϵ��� ���� ���̵� �Դϴ�");
		return 0;
	}
	printf("��й�ȣ :");
	gets(PW1);
	for (i = 0; PW[i] != '\0'; i++) {
		if (PW[i] != PW1[i]) {
			printf("you got wrong passworld");
			return 0;
		}
	}
	if (PW1[i] != '\0') {
		printf("you got wrong passworld");
		return 0;
	}
	else
		printf("Hansung�� ȯ���մϴ�");
	return 0;
}