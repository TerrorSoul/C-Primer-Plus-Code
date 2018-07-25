#include <stdio.h>

void to_base_n(unsigned long, int);

int main(void) {
	unsigned long n;
	int k;

	printf_s("输入想表示的数字：");
	scanf_s("%lu", &n);
	printf_s("输入想用的进制：");
	scanf_s("%d", &k);

	to_base_n(n, k);

	getchar();
	getchar();
	return 0;
}

void to_base_n(unsigned long n, int k) {
	int r;

	r = n % k;
	if (n >= k)
	{
		to_base_n(n / k, k);
	}
	printf_s("%d", r);
}