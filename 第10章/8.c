#include <stdio.h>

void copy_arr(double[], double[], int);

int main(void) {
	double test[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	double target[3];

	copy_arr(target, test + 2, 3);

	for (size_t i = 0; i < 3; i++)
	{
		printf_s("%.1f ", target[i]);
	}

	getchar();
	return 0;
}

void copy_arr(double target[], double source[], int count) {
	for (int i = 0; i < count; i++)
	{
		target[i] = source[i];
	}
}