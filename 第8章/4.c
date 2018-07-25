#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
	char ch;
	int num = 0, sum = 0;
	bool mark = false;

	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
		{
			++sum;
			mark = true;
		}
		else
		{
			if (mark)
			{
				++num;
				mark = false;
			}
		}
	}
	printf_s("ƽ��ÿ�����ʵ���ĸ��Ϊ��%f", (float)sum / num);

	getchar();
	return 0;
}