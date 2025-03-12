#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {
	time_t now;
	now = time(NULL);
	printf("%s\n\n", ctime(&now));
	struct tm* t;
	t = localtime(&now);
	int year = t->tm_year;
	int month = t->tm_mon;
	int day = t->tm_mday;
	int hour = t->tm_hour;
	int mins = t->tm_min;
	int sec = t->tm_sec;
	printf("%d년 %d월 %d일 %d시 %d분 %d초", year + 1900, month + 1, day, hour, mins, sec);
}
