#include <stdio.h>

int main(void) {
	printf_s("Enter a floating-point value:");
	float f;
	scanf_s("%f", &f);
	printf_s("fixed-point notation: %f\n"
		"exponential notation: %e\n"
		"p notation: %a\n", f, f, f);

	getchar();
	getchar();
	return 0;
}