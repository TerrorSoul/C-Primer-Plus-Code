#include <stdio.h>

int main(void) {
	printf_s("Enter a height in centimeters£º");
	float height;
	scanf_s("%f", &height);
	while (height > 0)
	{
		int feet = height / 30.48;
		float inch = (height - feet * 30.48) / 2.54;
		printf_s("%.1f cm = %d feet and %.1f inches.\n", height, feet, inch);
		printf_s("Enter a height in centimeters(<=0 to quit)£º");
		scanf_s("%f", &height);
	}
	printf_s("bye");
	getchar();
	getchar();
	return 0;
}