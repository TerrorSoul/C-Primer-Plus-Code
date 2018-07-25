#include <stdio.h>

int main(void) {
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j <= i; j++) {
			printf_s("$");
		}
		printf_s("\n");
	}

	getchar();
	return 0;
}