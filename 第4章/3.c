#include <stdio.h>

int main(void) {
	printf_s("ÊäÈë¸¡µãÊı£º");
	float f;
	scanf_s("%f", &f);
	printf_s("a. The input is %.1f or %.1e.\n", f, f);
	printf_s("b. The input is %+.3f or %.3E.", f, f);

	getchar();
	getchar();
	return 0;
}