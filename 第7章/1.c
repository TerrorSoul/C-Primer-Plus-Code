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
	printf_s("�ո���Ϊ��%d�����з���Ϊ��%d�����������ַ�������Ϊ��%d", space, enter, others);

	getchar();
	getchar();
	return 0;
}