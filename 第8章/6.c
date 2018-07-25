#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void) {
	char ch = get_first();
	printf_s("读取的第1个非空白字符为：%c", ch);

	getchar();
	return 0;
}

char get_first(void) {
	int ch;

	while (isspace(ch = getchar())) {
		;
	}
	while (getchar() != '\n')
	{
		continue;
	}

	return ch;
}