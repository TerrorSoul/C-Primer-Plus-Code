#include <stdio.h>

int main(void) {
	int u, l;
	printf_s("输入表格的上限：");
	scanf_s("%d", &u);
	printf_s("输入表格的下限：");
	scanf_s("%d", &l);

	for (size_t i = l; i <= u; i++)
	{
		printf_s("%d %d %d\n", i, i * i, i * i * i);
	}

	getchar();
	getchar();
	return 0;
}