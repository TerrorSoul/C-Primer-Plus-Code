#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	char test[20];
	
	fgets(test, 20, stdin);
	test[strnlen_s(test, 20) - 1] = '\0';

	if (strcmp(argv[1], "-u") == 0)
	{
		for (size_t i = 0; i < strnlen_s(test, 20); i++)
		{
			printf_s("%c", toupper(test[i]));
		}
	}
	else if (strcmp(argv[1], "-l") == 0)
	{
		for (size_t i = 0; i < strnlen_s(test, 20); i++)
		{
			printf_s("%c", tolower(test[i]));
		}
	}
	else
	{
		for (size_t i = 0; i < strnlen_s(test, 20); i++)
		{
			printf_s("%c", test[i]);
		}
	}

	getchar();
	return 0;
}