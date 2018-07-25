#include <stdio.h>

int main(void) {
	printf_s("输入一个整数：");
	int i;
	scanf_s("%d", &i);
	while (i > 0)
	{
		printf_s("%d days are %d weeks and %d days.\n", i, i / 7, i % 7);
		printf_s("输入一个整数：");
		scanf_s("%d", &i);
	}

	return 0;
}