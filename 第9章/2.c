#include <stdio.h>

void chline(char, int, int);

int main(void) {
	char ch;
	int cols, rows;
	
	printf_s("����һ���ַ���");
	scanf_s("%c", &ch, 1);
	printf_s("����������");
	scanf_s("%d", &cols);
	printf_s("����������");
	scanf_s("%d", &rows);

	chline(ch, cols, rows);

	getchar();
	getchar();
	return 0;
}

void chline(char ch, int cols, int rows) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf_s("%c ", ch);
		}
		printf_s("\n");
	}
}