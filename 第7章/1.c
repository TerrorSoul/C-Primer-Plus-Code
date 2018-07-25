#include <stdio.h>

int main(void) {
	char ch;
	int space = 0, enter = 0, others = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
		{
			++space;
		}
		else if (ch == '\n')
		{
			++enter;
		}
		else
		{
			++others;
		}
	}
	printf_s("空格数为：%d，换行符数为：%d，所有其他字符的数量为：%d", space, enter, others);

	getchar();
	getchar();
	return 0;
}