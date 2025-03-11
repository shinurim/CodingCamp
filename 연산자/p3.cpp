#include <stdio.h>

int main(void) {
    int year;
    printf("년도를 입력하시오: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                printf("윤년 입니다\n");
            else
                printf("윤년이 아닙니다\n");
        }
        else {
            printf("윤년 입니다\n");
        }
    }
    else {
        printf("윤년이 아닙니다\n");
    }

    return 0;
}