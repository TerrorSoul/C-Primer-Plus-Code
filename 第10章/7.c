#include <stdio.h>

void copy_arr(double[], double[], int);

int main(void) {
	double test[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	double target[3][3];

	for (size_t i = 0; i < 3; i++)
	{
		copy_arr(target[i], test + i * 3, 3);
	}

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++) {
			printf_s("%.1f ", target[i][j]);
		}
		printf_s("\n");
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