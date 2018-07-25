#include <stdio.h>

double* Temperatures(double, double[]);

int main(void) {
	printf_s("输入一个华氏温度：");
	double temp;
	while (scanf_s("%lf", &temp) == 1) {
		double temperatures[2];
		Temperatures(temp, temperatures);
		printf_s("%.2f 华氏度 = %.2f 摄氏度\n%.2f 华氏度 = %.2f 开氏度\n", temp, temperatures[0], temp, temperatures[1]);
		printf_s("再输入一个华氏温度：");
	}

	getchar();
	return 0;
}

double* Temperatures(double temp, double temperatures[]) {
	temperatures[0] = 5.0 / 9.0 * (temp - 32.0);
	temperatures[1] = temperatures[0] + 273.16;
	return temperatures;
}