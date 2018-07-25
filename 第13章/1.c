#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int ch;
	FILE *fp;
	unsigned long count = 0;
	char file[20];

	fgets(file, 20, stdin);
	file[strnlen_s(file, 20) - 1] = '\0';
	fopen_s(&fp, file, "r");
	if (fp == NULL)
	{
		printf_s("Can't open %s\n", file);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf_s("\nFile %s has %lu charachers\n", file, count);

	getchar();
	return 0;
}