#include <stdio.h>
#include <string.h>

int main(void) {
	char lines[255];
	for (size_t i = 0; i < 255; i++)
	{
		scanf_s("%c", &lines[i], 1);
		if (lines[i] == '\n')
		{
			lines[i] = '\0';
			break;
		}
	}
	for (int i = strlen(lines) - 1; i >= 0; i--)
	{
		printf_s("%c", lines[i]);
	}

	getchar();
	return 0;
}