#include <stdio.h>

int is_within(const char*, int);

int main(void) {
	char str[20];
	char ch;
	
	fgets(str, 20, stdin);
	ch = getchar();
	printf_s("%d", is_within(str, ch));

	getchar();
	getchar();
	return 0;
}

int is_within(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return 1;
		}
		++s;
	}
	return 0;
}