#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void) {
	char ch = get_first();
	printf_s("��ȡ�ĵ�1���ǿհ��ַ�Ϊ��%c", ch);

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