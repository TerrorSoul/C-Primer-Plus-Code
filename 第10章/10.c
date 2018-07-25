#include <stdio.h>

#define LENGTH 4

void add_two_array(int[], int[], int[], int);

int main(void) {
	int source1[LENGTH] = { 2, 4, 5, 8 };
	int source2[LENGTH] = { 1, 0, 4, 6 };
	int target[LENGTH];

	add_two_array(source1, source2, target, LENGTH);

	for (size_t i = 0; i < LENGTH; i++)
	{
		printf_s("%d ", target[i]);
	}

	getchar();
	return 0;
}

void add_two_array(int source1[], int source2[], int target[], int length) {
	for (size_t i = 0; i < length; i++)
	{
		target[i] = source1[i] + source2[i];
	}
}