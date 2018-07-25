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
	printf_s("ei���ֵĴ���Ϊ��%d", num);

	getchar();
	getchar();
	return 0;
}