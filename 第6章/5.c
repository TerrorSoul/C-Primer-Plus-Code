#include <stdio.h>

int main(void) {
	printf_s("输入一个大写字母：");
	char c;
	scanf_s("%c", &c, 1);
	for (size_t i = 0; i < c - 64; i++)
	{
		for (size_t j = 0; j < c - 65 - i; j++) {
			printf_s(" ");
		}
		int k = 65;
		for (size_t j = 0; j <= i; j++)
		{
			printf_s("%c", k++);
		}
		--k;
		for (size_t j = 0; j < i; j++)
		{
			printf_s("%c", --k);
		}
		printf_s("\n");
	}

	getchar();
	getchar();
	return 0;
}