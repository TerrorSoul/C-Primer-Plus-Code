#include <stdio.h>

char *strchr(const char*, int);

int main(void) {
	char str[20];
	char ch;
	
	fgets(str, 20, stdin);
	ch = getchar();
	char * cp = strchr(str, ch);
	printf_s("%c", cp == NULL ? ' ' : *cp);

	getchar();
	getchar();
	return 0;
}

char * strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return s;
		}
		++s;
	}
	return NULL;
}