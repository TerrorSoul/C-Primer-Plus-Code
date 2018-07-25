#include <stdio.h>

double difference_between_max_min(double[], int);

int main(void) {
	double test[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double difference = difference_between_max_min(test, 5);

	printf_s("最大值和最小值的差值为%.1f", difference);

	getchar();
	return 0;
}

double difference_between_max_min(double test[], int count) {
	double max = test[0], min = test[0];
	for (int i = 1; i < count; i++)
	{
		if (max < test[i])
		{
			max = test[i];
		}
		else if (min > test[i])
		{
			min = test[i];
		}
	}
	return max - min;
}