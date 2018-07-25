#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv []) {
	double base = atof(argv[1]);
	int index = atoi(argv[2]);

	printf_s("%f的%d次方为%f", base, index, pow(base, index));

	getchar();
	return 0;
}