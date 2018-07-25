#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	unsigned test[100];
	srand((unsigned int)time(0));

	for (size_t i = 0; i < 100; i++)
	{
		test[i] = rand() % 10 + 1;
		printf_s("%2u ",test[i]);
		if ((i + 1) % 10 == 0)
		{
			printf_s("\n");
		}
	}

	getchar();
	return 0;
}