#include <stdio.h>

int main(void) {
	float a, b;
	printf_s("输入两个浮点数：");
	if (scanf_s("%f %f", &a, &b))
	{
		printf_s("(%0.1f - %0.1f) / (%0.1f * %0.1f) = %0.1f", a, b, a, b, (a - b) / (a * b));
	}

	getchar();
	getchar();
	return 0;
}