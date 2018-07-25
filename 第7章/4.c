#include <stdio.h>
#include <string.h>

int main(void) {
	char ch;
	int counts = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			printf_s("!");
			++counts;
		}
		else if (ch == '!')
		{
			printf_s("!!");
			++counts;
		}
		else
		{
			printf_s("%c", ch);
		}
	}
	printf_s("\n进行了%d次替换", counts);

	getchar();
	getchar();
	return 0;
}