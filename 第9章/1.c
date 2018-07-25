#include <stdio.h>

double min(double, double);

int main(void) {
	double x, y;

	printf_s("输入两个double类型值：");
	scanf_s("%lf %lf", &x, &y);
	printf_s("较小的值为：%.2f", min(x, y));

	getchar();
	getchar();
	return 0;
}

double min(double x, double y) {
	return x < y ? x : y;
}