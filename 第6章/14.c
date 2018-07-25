#include <stdio.h>

int main(void) {
	double index1[8], index2[8];
	printf_s("输入8个double类型的数：");
	for (size_t i = 0; i < 8; i++)
	{
		scanf_s("%lf", &index1[i]);
	}
	index2[0] = index1[0];
	for (size_t i = 1; i < 8; i++)
	{
		index2[i] = index2[i - 1] + index1[i];
	}
	int index = 3;
	int lastIndex = index2[7];
	while (lastIndex > 0)
	{
		++index;
		lastIndex /= 10;
	}
	for (size_t i = 0; i < 8; i++)
	{
		printf_s("%*.2f ", index, index1[i]);
	}
	printf_s("\n");
	for (size_t i = 0; i < 8; i++)
	{
		printf_s("%*.2f ", index, index2[i]);
	}

	getchar();
	getchar();
	return 0;
}