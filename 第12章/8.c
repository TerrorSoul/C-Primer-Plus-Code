#include <stdio.h>
#include <stdlib.h>

int* make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(void) {
	int *pa;
	int size;
	int value;

	printf_s("Enter the number of elements: ");
	while (scanf_s("%d", &size) == 1 && size > 0)
	{
		printf_s("Enter the initialization value: ");
		scanf_s("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf_s("Enter the number of elements (<1 to quit): ");
	}
	printf_s("Done.\n");

	getchar();
	return 0;
}

int* make_array(int elem, int val) {
	int* pti;
	pti = (int*)malloc(elem * sizeof(int));
	for (size_t i = 0; i < elem; i++)
	{
		pti[i] = val;
	}
	return pti;
}
void show_array(const int ar[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		printf_s("%d ", ar[i]);
		if ((i + 1) % 8 == 0)
		{
			printf_s("\n");
		}
	}
	printf_s("\n");
}