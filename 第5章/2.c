#include <stdio.h>

int main(void) {
	printf_s("����һ��������");
	int i;
	scanf_s("%d", &i);
	int j = i;
	while (j - i <= 10)
	{
		printf_s("%d ", j++);
	}

	getchar();
	getchar();
	return 0;
}