#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 41

int main(void) {
	FILE *in, *out;
	char temp[BUFSIZE];
	size_t ch;

	fopen_s(&in, "text.txt", "rb");
	fopen_s(&out, "text_1.txt", "wb");
	if (out == NULL || in == NULL)
	{
		fprintf_s(stderr, "Can't create output file.\n");
		exit(EXIT_FAILURE);
	}

	setvbuf(in, NULL, _IOFBF, BUFSIZE);
	while (!feof(in))
	{
		ch = fread_s(temp, 256, sizeof(char), 256, in);
		fwrite(temp, sizeof(char), ch, out);
	}
	fclose(in);
	fclose(out);

	getchar();
	return 0;
}