#include <stdio.h>

unsigned long Fibonacci(unsigned);

int main(void) {
	unsigned n;

	printf_s("����Ҫ�����쳲�������������");
	scanf_s("%u", &n);
	printf_s("����쳲�������Ϊ��%lu", Fibonacci(n));

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