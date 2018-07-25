#include <stdio.h>
#include <ctype.h>

int charLocation(char);

int main(void) {
	char ch;
	while ((ch = getchar()) != EOF) {
		if (isalpha(ch))
		{
			printf_s("该字符是字母%c，在字母表中的数值位置为%d\n",
				ch, charLocation(ch));
		}
		else
		{
			printf_s("该字符不是字母\n");
		}
	}

	getchar();
	return 0;
}

int charLocation(char ch) {
	return tolower(ch) - 96;
}