#include <stdio.h>

double tiaohe(double, double);

int main(void) {
	double x, y;
	printf_s("��������double����ֵ��");
	scanf_s("%lf %lf", &x, &y);
	printf_s("�������ĵ���ƽ����Ϊ��%.2f", tiaohe(x, y));

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