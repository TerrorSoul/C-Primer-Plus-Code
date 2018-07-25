#include <stdio.h>

void get_array(int, double[][5]);
double each_average(int, double[]);
double total_average(int, double[][5]);
double find_max(int, double[][5]);
void print_result(int, double[][5]);

int main(void) {
	double test[3][5];
	get_array(3, test);

	print_result(3, test);

	getchar();
	getchar();
	return 0;
}

void get_array(int length, double test[][5]) {
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			scanf_s("%lf", &test[i][j]);
		}
	}
}

double each_average(int length, double each[])
{
	double total = 0;
	for (size_t i = 0; i < length; i++)
	{
		total += each[i];
	}
	return total / length;
}

double total_average(int length, double test[][5]) {
	double total = 0;
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			total += test[i][j];
		}
	}
	return total / length / 5;
}

double find_max(int length, double test[][5])
{
	double max = test[0][0];
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < 5; j++) {
			if (max < test[i][j])
			{
				max = test[i][j];
			}
		}
	}
	return max;
}

void print_result(int length, double test[][5])
{
	for (size_t i = 0; i < length; i++)
	{
		printf_s("第%zd组数据的平均值为：%.2f\n", i + 1, each_average(5, test[i]));
	}
	printf_s("所有数据的平均值为：%.2f\n", total_average(3, test));
	printf_s("这15个数据中的最大值为：%.2f\n", find_max(3, test));
}