#include <stdio.h>
#include <string.h>
#include <ctype.h>

void delete_space(char*);

int main(void) {
	char test[20];

	fgets(test, 20, stdin);
	test[strnlen_s(test, 20) - 1] = '\0';
	delete_space(test);
	fputs(test, stdout);

	getchar();
	return 0;
}

void delete_space(char *test) {
	size_t length = strnlen_s(test, 20), j = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (!isspace(test[i])) {
			test[j++] = test[i];
		}
	}
	test[j] = '\0';
}