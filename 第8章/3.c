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
	printf_s("Сд��ĸ�ĸ���Ϊ��%d����д��ĸ�ĸ���Ϊ��%d", lnum, unum);

	getchar();
	return 0;
}