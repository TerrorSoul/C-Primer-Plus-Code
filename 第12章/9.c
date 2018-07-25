#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int words;
	char** str_arr;

	printf_s("How many words: ");
	scanf_s("%d", &words);
	str_arr = (char**)malloc(words * sizeof(char*));
	while (getchar() != '\n')
	{
		continue;
	}
	for (size_t i = 0; i < words; i++)
	{
		char temp[30];
		fgets(temp, 30, stdin);
		char* str_temp = (char*)malloc((strnlen_s(temp, 30) + 1) * sizeof(char));
		if (str_temp)
		{
			strncpy_s(str_temp, strnlen_s(temp, 30) + 1, temp, 30);
			str_arr[i] = str_temp;
		}
		else
		{
			printf_s("malloc fail!\n");
		}
	}
	for (size_t i = 0; i < words; i++)
	{
		fputs(str_arr[i], stdout);
	}

	getchar();
	return 0;
}