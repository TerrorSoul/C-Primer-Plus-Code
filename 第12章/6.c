#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int count[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	srand((unsigned)time(0));

	for (size_t i = 0; i < 1000; i++)
	{
		++count[rand() % 10];
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf_s("%3u ", count[i]);
	}

	getchar();
	return 0;
}