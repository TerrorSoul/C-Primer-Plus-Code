#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	char test[50];
	int word = 0, supper = 0, lower = 0, punct = 0, digit = 0;
	bool mark = false;

	fgets(test, 50, stdin);
	test[strnlen_s(test, 50) - 1] = '\0';
	for (size_t i = 0; i < strnlen_s(test, 50); i++)
	{
		if (isalpha(test[i]))
		{
			if (!mark)
			{
				++word;
				mark = true;
			}
			if (isupper(test[i]))
			{
				++supper;
			}
			else
			{
				++lower;
			}
		}
		else
		{
			mark = false;
			if (ispunct(test[i]))
			{
				++punct;
			}
			else if (isdigit(test[i]))
			{
				++digit;
			}
		}
	}

	printf_s("单词数：%d，大写字母数：%d，小写字母数：%d，标点符号数：%d，数字字符数：%d",
		word, supper, lower, punct, digit);

	getchar();
	return 0;
}