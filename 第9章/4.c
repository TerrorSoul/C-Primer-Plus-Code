#include <stdio.h>

double tiaohe(double, double);

int main(void) {
	double x, y;
	printf_s("输入两个double类型值：");
	scanf_s("%lf %lf", &x, &y);
	printf_s("这两数的调和平均数为：%.2f", tiaohe(x, y));

	getchar();
	getchar();
	return 0;
}

double tiaohe(double x, double y) {
	x = 1 / x;
	y = 1 / y;
	double z = (x + y) / 2;
	return 1 / z;
}