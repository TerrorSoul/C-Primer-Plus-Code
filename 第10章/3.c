#include <stdio.h>

int max_in_array(int[], int);

int main(void) {
	int test[] = { 1, 2, 3, 4, 5 };
	int max = max_in_array(test, 5);
	printf_s("最大值为%d", max);

	getchar();
	return 0;
}

int max_in_array(int test[], int count) {
	int max = test[0];
	for (int i = 1; i < count; i++)
	{
		if (max < test[i])
		{
			max = test[i];
		}
	}
	return max;
}