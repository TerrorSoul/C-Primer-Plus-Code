#include <stdio.h>

int main(void) {
	for (size_t i = 0; i < 6; i++)
	{
		int c = 70;
		for (size_t j = 0; j <= i; j++) {
			printf_s("%c", c--);
		}
		printf_s("\n");
	}
	getchar();
	return 0;
}