#include <stdio.h>
#include <float.h>

int main(void) {
	double d = 1.0 / 3.0;
	float f = 1.0 / 3.0;
	printf_s("%.6f %.6f\n", d, f);
	printf_s("%.12f %.12f\n", d, f);
	printf_s("%.16f %.16f\n", d, f);
	printf_s("%d %d", FLT_DIG, DBL_DIG);

	getchar();
	return 0;
}