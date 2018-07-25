#include <stdio.h>

int max_in_array(double[], int);

int main(void) {
	double test[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	int max = max_in_array(test, 5);

	printf_s("最大值为%.1f", test[max]);

	getchar();
	return 0;
}

int max_in_array(double test[], int count) {
	int max = 0;
	for (int i = 1; i < count; i++)
	{
		if (test[max] < test[i])
		{
			max = i;
		}
	}
	return max;
}