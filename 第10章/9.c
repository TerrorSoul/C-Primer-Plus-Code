#include <stdio.h>

#define COLS 5

void copy_array(double[][COLS], double[][COLS], int);
void show_array(double[][COLS], int);

int main(void) {
	double source[3][5] = {
		{0.1, 1.1 ,2.1, 3.1, 4.1},
		{0.2, 1.2, 2.2, 3.2, 4.2},
		{0.3, 1.3, 2.3, 3.3, 4.3}
	};
	double target[3][5];
	copy_array(target, source, 3);
	show_array(source, 3);
	show_array(target, 3);

	getchar();
	return 0;
}

void copy_array(double target[][COLS], double source[][COLS], int length) {
	for (int i = 0; i < length; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			target[i][j] = source[i][j];
		}
	}
}

void show_array(double arr[][COLS], int length) {
	for (int i = 0; i < length; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			printf_s("%.1f ", arr[i][j]);
		}
		printf_s("\n");
	}
	printf_s("\n");
}