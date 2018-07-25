#include <stdio.h>
#include <stdbool.h>

int main(void) {
	bool mark = false;
	int num = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			mark = true;
		}
		else if (ch == 'i')
		{
			if (mark)
			{
				++num;
			}
			mark = false;
		}
		else
		{
			mark = false;
		}
	}
	printf_s("ei出现的次数为：%d", num);

	getchar();
	getchar();
	return 0;
}