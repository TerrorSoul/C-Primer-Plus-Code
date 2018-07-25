#include <stdio.h>
#include <ctype.h>

void get_word(int, char[]);

int main(void) {
	char word[10];
	get_word(10, word);

	printf_s("%s", word);

	getchar();
	return 0;
}

void get_word(int length, char word[]) {
	char line[20];
	fgets(line, 20, stdin);
	size_t i = 0;
	while (!isalpha(line[i++]))
	{
		/*Пе*/
	}
	size_t start = --i;
	while (isalpha(line[i++]))
	{
		/*Пе*/
	}
	size_t end = --i;
	for (i = start; i < end && i < start + length - 1; i++)
	{
		word[i - start] = line[i];
	}
	word[i -start] = '\0';
}