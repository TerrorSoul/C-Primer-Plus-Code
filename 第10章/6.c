#include <stdio.h>

void reverse_array(double[], int);

int main(void) {
	double test[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	reverse_array(test, 5);

	for (size_t i = 0; i < 5; i++)
	{
		printf_s("%.1f ", test[i]);
	}

	getchar();
	return 0;
}

void reverse_array(double test[], int length) {
	for (int i = 0; i < length / 2; i++)
	{
		double temp = test[i];
		test[i] = test[length - i - 1];
		test[length - i - 1] = temp;
	}
}