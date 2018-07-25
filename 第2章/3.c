#include <stdio.h>
#include <time.h>

int main(void) {
	struct tm birth;
	printf_s("你输入你的生日。\n年份：");
	scanf_s("%d", &birth.tm_year);
	birth.tm_year -= 1900;
	printf_s("月份：");
	scanf_s("%d", &birth.tm_mon);
	birth.tm_mon -= 1;
	printf_s("日期：");
	scanf_s("%d", &birth.tm_mday);
	birth.tm_hour = 0;
	birth.tm_min = 0;
	birth.tm_sec = 0;
	printf_s("你已经活了%ld天。", (long)difftime(time(0), mktime(&birth)) / (24 * 60 * 60));

	getchar();
	getchar();
	return 0;
}