#include <stdio.h>

int main(void) {
    int year;
    printf("�⵵�� �Է��Ͻÿ�: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                printf("���� �Դϴ�\n");
            else
                printf("������ �ƴմϴ�\n");
        }
        else {
            printf("���� �Դϴ�\n");
        }
    }
    else {
        printf("������ �ƴմϴ�\n");
    }

    return 0;
}