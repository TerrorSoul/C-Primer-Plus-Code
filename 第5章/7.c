#include <stdio.h>

double cubic(double);

int main(void) {
	printf_s("����һ��double���͵�����");
	double i;
	scanf_s("%lf", &i);
	printf_s("%f������ֵΪ��%f", i, cubic(i));

	getchar();
	getchar();
	return 0;
}

double cubic(double i) {
	return i * i * i;
}