#include <stdio.h>

double min(double, double);

int main(void) {
	double x, y;

	printf_s("��������double����ֵ��");
	scanf_s("%lf %lf", &x, &y);
	printf_s("��С��ֵΪ��%.2f", min(x, y));

	getchar();
	getchar();
	return 0;
}

double min(double x, double y) {
	return x < y ? x : y;
}