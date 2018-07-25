#include <stdio.h>

unsigned long Fibonacci(unsigned);

int main(void) {
	unsigned n;

	printf_s("输入要计算的斐波那契数项数：");
	scanf_s("%u", &n);
	printf_s("该项斐波那契数为：%lu", Fibonacci(n));

	getchar();
	getchar();
	return 0;
}

unsigned long Fibonacci(unsigned n) {
	if (n > 2)
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
	else
	{
		return 1;
	}
}