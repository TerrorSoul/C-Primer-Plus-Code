#include <stdio.h>
#include <ctype.h>

int main(void) {
	char ch;
	int lnum = 0, unum = 0;

	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
		{
			++lnum;
		}
		else if (isupper(ch))
		{
			++unum;
		}
	}
	printf_s("小写字母的个数为：%d，大写字母的个数为：%d", lnum, unum);

	getchar();
	return 0;
}