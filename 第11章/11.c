#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

size_t get_strings(size_t, char[][20]);
int show_menu();
void original_order(size_t, char[][20]);
void ascii_order(size_t, char[][20]);
void length_order(size_t, char[][20]);
void letter_order(size_t, char[][20]);

int main(void) {
	char strings[10][20];
	size_t length = get_strings(10, strings);
	int i;
	do
	{
		i = show_menu();
		switch (i)
		{
		case 1:
			original_order(length, strings);
			break;
		case 2:
			ascii_order(length, strings);
			break;
		case 3:
			length_order(length, strings);
			break;
		case 4:
			letter_order(length, strings);
			break;
		default:
			break;
		}
	} while (i != 5);

	return 0;
}

size_t get_strings(size_t length, char strings[][20]) {
	size_t i;
	for (i = 0; i < length; i++)
	{
		printf_s("%zd.", i + 1);
		if (fgets(strings[i], 20, stdin)) {
			strings[i][strnlen_s(strings[i], 20) - 1] = '\0';
		}
		else
		{
			break;
		}
	}
	return i;
}

int show_menu() {
	for (size_t i = 0; i < 50; i++)
	{
		printf_s("=");
	}
	printf_s("\n");
	char* order[] = { "original_order", "ascii_order", "length_order", "letter_order" };
	for (size_t i = 0; i < 4; i++)
	{
		printf_s("%zd.%-20s", i + 1, order[i]);
		if ((i + 1) % 2 == 0)
		{
			printf_s("\n");
		}
	}
	printf_s("5.quit\n");
	for (size_t i = 0; i < 50; i++)
	{
		printf_s("=");
	}
	printf_s("\n");
	int choice;
	scanf_s("%d", &choice);
	return choice;
}

void original_order(size_t length, char strings[][20]) {
	printf_s("\n");
	for (size_t i = 0; i < length; i++)
	{
		printf_s("%-20s", strings[i]);
		if ((i + 1) % 5 == 0)
		{
			printf_s("\n");
		}
	}
}

int ascii_compare(const void *arg1, const void *arg2) {
	return strcmp((char*)arg1, (char*)arg2);
}
void ascii_order(size_t length, char strings[][20]) {
	qsort(strings, length, 20 * sizeof(char), ascii_compare);
	original_order(length, strings);
}
int length_compare(const void *arg1, const void *arg2) {
	return strnlen_s((char*)arg1, 20) > strnlen_s((char*)arg2, 20);
}
void length_order(size_t length, char strings[][20]) {
	qsort(strings, length, 20 * sizeof(char), length_compare);
	original_order(length, strings);
}
size_t letter_length(size_t length, char string[]) {
	if (length == 0)
	{
		return 0;
	}
	size_t i = 0;
	while (!isalpha(string[i++]))
	{
		/*Пе*/
	}
	size_t start = --i;
	while (isalpha(string[i++]))
	{
		/*Пе*/
	}
	size_t end = --i;
	return end - start;
}
int letter_compare(const void *arg1, const void *arg2) {
	return letter_length(strnlen_s((char*)arg1, 20), (char*)arg1)  > letter_length(strnlen_s((char*)arg2, 20), (char*)arg2);
}
void letter_order(size_t length, char strings[][20]) {
	qsort(strings, length, 20 * sizeof(char), letter_compare);
	original_order(length, strings);
}