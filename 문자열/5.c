#include <stdio.h>
#include <ctype.h>

int main(void) {
	char PW[20];
	char PW1[20];
	int alpha, digit;
	printf("��й�ȣ�� ����մϴ�.\n");
A:  printf("��й�ȣ�� ����, ���� ���� �ּ��� 8�ڸ� �̾�� �մϴ�.\n");
	printf("���ο� ��й�ȣ �Է� :");
	alpha = 0, digit = 0;
	int i = 0;
	scanf("%s", PW);
	for (; PW[i] != '\0'; i++) {
		if (isalpha(PW[i]) != 0) {
			alpha++;
		}
		else if (isdigit(PW[i]) != 0)
			digit++;
	}
	if (alpha == 0 || digit == 0||i<8)
		goto A;
	else {
		printf("��й�ȣ �ѹ� �� �Է� :");
		scanf("%s", PW1);
		for (i = 0; PW[i] != '\0'; i++) {
			if (PW[i] != PW1[i]) { 
				printf("��й�ȣ�� ��Ȯ�� �Է��ϼ���.\n");
				goto A;
			}
		}
		if (PW1[i] == '\0') {
			printf("��й�ȣ�� ��ϵǾ����ϴ�\n");
			return 0;
		}
		else {
			printf("��й�ȣ�� ��Ȯ�� �Է��ϼ���.\n");
			goto A;
		}
	}
}