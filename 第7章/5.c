#include <stdio.h>
#include <string.h>

int main(void) {
	char ch;
	int counts = 0;
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			printf_s("!");
			++counts;
			break;
		case '!':
			printf_s("!!");
			++counts;
			break;
		default:
			printf_s("%c", ch);
			break;
		}
	}
	printf_s("\n������%d���滻", counts);

	getchar();
	getchar();
	return 0;
}