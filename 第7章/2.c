#include <stdio.h>
#include <string.h>

int main(void) {
	char ches[100];
	for (size_t i = 0; i < 100; i++)
	{
		char ch;
		if ((ch = getchar()) != '#')
		{
			ches[i] = ch;
		}
		else
		{
			ches[i] = '\0';
			break;
		}
	}
	for (size_t i = 0; i < strlen(ches); i++)
	{
		printf_s("%c: %3d; ", ches[i], ches[i]);
		if ((i + 1) % 8 == 0)
		{
			printf_s("\n");
		}
	}

	getchar();
	getchar();
	return 0;
}