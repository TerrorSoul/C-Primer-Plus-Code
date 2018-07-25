#include <stdio.h>
#include <ctype.h>

int main(void) {
	char ch;
	FILE *in, *out;

	fopen_s(&in, "text.txt", "r");
	fopen_s(&out, "text_1.txt", "w");
	if (in == NULL || out == NULL)
	{
		printf_s("Something is wrong.\n");
		return -1;
	}
	while ((ch = getc(in)) != EOF)
	{
		putc(toupper(ch), out);
	}
	printf_s("Everything is done.\n");

	getchar();
	return 0;
}