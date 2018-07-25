#include <stdio.h>

int main(void) {
	int ch, num = 0;

	while ((ch = getchar()) != EOF)
	{
		++num;
	}
	printf_s("\n×Ö·ûÊıÎª%d", num);

	getchar();
	return 0;
}