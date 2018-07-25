#include <stdio.h>

void copy_arr(double[], double[], int);
void copy_ptr(double *, double *, int);
void copy_ptrs(double *, double *, double *);

int main(void) {
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);

	printf_s("target1: ");
	for (size_t i = 0; i < 5; i++)
	{
		printf_s("%.1f ", target1[i]);
	}
	printf_s("\ntarget2: ");
	for (size_t i = 0; i < 5; i++)
	{
		printf_s("%.1f ", target2[i]);
	}
	printf_s("\ntarget3: ");
	for (size_t i = 0; i < 5; i++)
	{
		printf_s("%.1f ", target3[i]);
	}

	getchar();
	return 0;
}

void copy_arr(double target1[], double source[], int count) {
	for (int i = 0; i < count; i++)
	{
		target1[i] = source[i];
	}
}

void copy_ptr(double * target2, double * source, int count) {
	for (int i = 0; i < count; i++)
	{
		*(target2 + i) = *(source + i);
	}
}

void copy_ptrs(double * target3, double * source, double * sources) {
	double * target = target3;
	for (double * i = source; i < sources; i++)
	{
		*(target++) = *i;
	}
}