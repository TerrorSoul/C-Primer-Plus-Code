#include <stdio.h>

int main(void) {
	char lets[26];
	int let = 97;
	for (size_t i = 0; i < 26; i++)
	{
		lets[i] = let++;
	}
	for (size_t i = 0; i < 26; i++)
	{
		printf_s("%c", lets[i]);
	}

	getchar();
	return 0;
}