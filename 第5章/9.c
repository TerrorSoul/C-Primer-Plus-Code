#include <stdio.h>

double* Temperatures(double, double[]);

int main(void) {
	printf_s("����һ�������¶ȣ�");
	double temp;
	while (scanf_s("%lf", &temp) == 1) {
		double temperatures[2];
		Temperatures(temp, temperatures);
		printf_s("%.2f ���϶� = %.2f ���϶�\n%.2f ���϶� = %.2f ���϶�\n", temp, temperatures[0], temp, temperatures[1]);
		printf_s("������һ�������¶ȣ�");
	}

	getchar();
	return 0;
}

double* Temperatures(double temp, double temperatures[]) {
	temperatures[0] = 5.0 / 9.0 * (temp - 32.0);
	temperatures[1] = temperatures[0] + 273.16;
	return temperatures;
}