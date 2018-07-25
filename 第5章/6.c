#include <stdio.h>

int main(void) {
	int count, index, sum;

	index = 0;
	sum = 0;
	printf_s("输入一个整数：");
	scanf_s("%d", &count);
	while (index++ < count)
	{
		sum += index * index;
	}
	printf_s("sum = %d\n", sum);

	getchar();
	getchar();
	return 0;
}