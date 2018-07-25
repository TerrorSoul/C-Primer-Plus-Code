#include <stdio.h>

double cubic(double);

int main(void) {
	printf_s("输入一个double类型的数：");
	double i;
	scanf_s("%lf", &i);
	printf_s("%f的立方值为：%f", i, cubic(i));

	getchar();
	getchar();
	return 0;
}

double cubic(double i) {
	return i * i * i;
}