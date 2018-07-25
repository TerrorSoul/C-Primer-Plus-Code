#include <stdio.h>

int main(int argc, char *argv[]) {
	for (size_t i = argc - 1; i > 0; i--)
	{
		printf_s("%s ", argv[i]);
	}

	getchar();
	return 0;
}