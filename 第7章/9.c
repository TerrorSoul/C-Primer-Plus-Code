#include <stdio.h>
#include <stdbool.h>

bool is_sushu(unsigned);

int main(void) {
	unsigned u;
	printf_s("输入正整数：");
	while (!scanf_s("%u", &u) && u == 0)
	{
		printf_s("只能输入正整数：");
	}
	for (unsigned i = 1; i <= u; i++)
	{
		if (is_sushu(i))
		{
			printf_s("%u ", i);
		}
	}

	getchar();
	getchar();
	return 0;
}

bool is_sushu(unsigned i) {
	if (i >= 4) {
		for (unsigned j = 2; j <= i / 2; j++)
		{
			if (i % j == 0) {
				return false;
			}
		}
	}
	else if (i >= 2)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}