#include <stdio.h>

void get_n_char(int, char[]);

int main(void) {
	char test[10];
	get_n_char(10, test);

	getchar();
	return 0;
}

void get_n_char(int length, char test[]) {
	for (size_t i = 0; i < length; i++)
	{
		test[i] = getchar();
	}
}