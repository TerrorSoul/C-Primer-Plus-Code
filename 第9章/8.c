#include <stdio.h>

double power(double, int);

int main(void) {
	double n;
	int p;
	while (1) {
		printf_s("输入底数：");
		scanf_s("%lf", &n);
		printf_s("输入指数：");
		scanf_s("%d", &p);
		printf_s("%.2f的%d次方为%.2f\n", n, p, power(n, p));
	}

	getchar();
	return 0;
}

double power(double n, int p) {
	if (n == 0 && p != 0)
	{
		return 0;
	}
	else if (n != 0 && p == 0)
	{
		return 1;
	}
	else if (n == 0 && p == 0)
	{
		printf_s("0的0次幂未定义\n");
		return 1;
	}
	else if (p == 1)
	{
		return n;
	}
	else
	{
		double pow = 1;
		int i = p < 0 ? -p : p;
		for (int j = 0; j < i; j++)
		{
			pow *= n;
		}
		return p < 0 ? 1 / pow : pow;
	}
}