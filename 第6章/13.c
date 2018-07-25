#include <stdio.h>

int main(void) {
	int intsquare[8];
	for (int i = 0; i < 8; i++)
	{
		intsquare[i] = (i + 1) * (i + 1);
	}
	int i = 0;
	do
	{
		printf_s("%d ", intsquare[i++]);
	} while (i < 8);

	getchar();
	return 0;
}