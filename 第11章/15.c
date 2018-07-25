#include <stdio.h>
#include <string.h>
#include <ctype.h>

int atoi(char[]);

int main(void) {
	char test[10];

	fgets(test, 10, stdin);
	test[strnlen_s(test, 10) - 1] = '\0';

	int digit = atoi(test);
	printf_s("%s对应的整数为%d", test, digit);

	getchar();
	return 0;
}

int atoi(char test[]) {
	size_t length = strnlen_s(test, 10);
	int digit = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (isdigit(test[i])) {
			digit = (test[i] - '0') + digit * 10;
		}
		else
		{
			return 0;
		}
	}
	return digit;
}