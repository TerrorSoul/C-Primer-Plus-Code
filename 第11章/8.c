#include <stdio.h>
#include <string.h>

char * string_in(const char*, const char*);

int main(void) {
	char target[20];
	char source[10];

	fgets(target, 20, stdin);
	fgets(source, 10, stdin);
	target[strlen(target) - 1] = '\0';
	source[strlen(source) - 1] = '\0';
	char *cp = string_in(target, source);
	printf_s("%c", cp == NULL ? ' ' : *cp);

	getchar();
	return 0;
}

char * string_in(const char *target, const char *source)
{
	return strstr(target, source);
}