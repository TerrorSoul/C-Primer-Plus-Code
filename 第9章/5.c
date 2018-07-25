#include <stdio.h>

void larger_of(double*, double*);

int main(void) {
	double x, y;
	printf_s("输入两个double类型值：");
	scanf_s("%lf %lf", &x, &y);
	larger_of(&x, &y);
	printf_s("%.2f %.2f", x, y);

	getchar();
	getchar();
	return 0;
}

void larger_of(double *px, double *py) {
	if (*px > *py)
	{
		*py = *px;
	}
	else
	{
		*px = *py;
	}
}