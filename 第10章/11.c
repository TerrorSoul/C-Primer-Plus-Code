#include <stdio.h>

void show_array(int, int[][5]);
void double_array(int, int[][5]);

int main(void) {
	int test[3][5] = {
		{0, 1, 2, 3, 4},
		{1, 2, 3, 4, 5},
		{2, 3, 4, 5, 6}
	};
	show_array(3, test);
	double_array(3, test);
	show_array(3, test);

	getchar();
	return 0;
}

void show_array(int length, int test[][5]) {
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < 5; j++) {
			printf_s("%2d ", test[i][j]);
		}
		printf_s("\n");
	}
	printf_s("\n");
}

void double_array(int length, int test[][5]) {
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < 5; j++) {
			test[i][j] *= 2;
		}
	}
}