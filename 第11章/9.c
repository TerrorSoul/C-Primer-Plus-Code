#include <stdio.h>
#include <string.h>

void reverse_string(char*);

int main(void) {
	char test[20];

	fgets(test, 20, stdin);
	test[strnlen_s(test, 20) - 1] = '\0';
	reverse_string(test);
	fputs(test, stdout);

	getchar();
	return 0;
}

void reverse_string(char *test) {
	size_t length = strnlen_s(test, 20);
	for (size_t i = 0; i < length / 2; i++)
	{
		char temp = test[i];
		test[i] = test[length - i - 1];
		test[length - i - 1] = temp;
	}
}