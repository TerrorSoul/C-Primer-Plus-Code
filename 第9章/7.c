#include <stdio.h>
#include <ctype.h>

int charLocation(char);

int main(void) {
	char ch;
	while ((ch = getchar()) != EOF) {
		if (isalpha(ch))
		{
			printf_s("���ַ�����ĸ%c������ĸ���е���ֵλ��Ϊ%d\n",
				ch, charLocation(ch));
		}
		else
		{
			printf_s("���ַ�������ĸ\n");
		}
	}

	getchar();
	return 0;
}

int charLocation(char ch) {
	return tolower(ch) - 96;
}