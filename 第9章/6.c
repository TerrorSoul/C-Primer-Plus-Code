#include <stdio.h>

void three_double(double*, double*, double*);

int main(void) {
	double x, y, z;
	printf_s("输入三个double类型值：");
	scanf_s("%lf %lf %lf", &x, &y, &z);
	three_double(&x, &y, &z);
	printf_s("%.2f %.2f %.2f", x, y, z);

	getchar();
	getchar();
	return 0;
}

void three_double(double *px, double *py, double *pz) {
	double xyz[] = { *px, *py, *pz };
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = i + 1; j < 3; ++j) {
			if (xyz[j] < xyz[i])
			{
				double temp = xyz[i];
				xyz[i] = xyz[j];
				xyz[j] = temp;
			}
		}
	}
	*px = xyz[0];
	*py = xyz[1];
	*pz = xyz[2];
}