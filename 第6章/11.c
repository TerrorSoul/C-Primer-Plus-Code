#include <stdio.h>

int main(void) {
	int integers[8];
	printf_s("输入8个整数：");
	for (size_t i = 0; i < 8; i++)
	{
		scanf_s("%d", &integers[i]);
	}
	printf_s("倒序输出8个整数：");
	for (int i = 7; i >= 0; i--)
	{
		printf_s("%d ", integers[i]);
	}

	getchar();
	getchar();
	return 0;
}