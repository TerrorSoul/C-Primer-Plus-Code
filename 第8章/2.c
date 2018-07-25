#include <stdio.h>
#include <ctype.h>

int main(void) {
	int ch, num = 0;

	while ((ch = getchar()) != EOF)
	{
		++num;
		if (ch == '\n')
		{
			printf_s("\\n: %d\n", ch);
		}
		else if(ch == '\t')
		{
			printf_s("\\t: %d\n", ch);
		}
		else if (iscntrl(ch))
		{
			printf_s("^%c: %d\n", ch + 64, ch);
		}
		else
		{
			printf_s("%c: %d\n", ch, ch);
		}
	}
	printf_s("×Ö·ûÊýÎª%d", num);

	getchar();
	return 0;
}