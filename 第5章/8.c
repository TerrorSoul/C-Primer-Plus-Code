#include <stdio.h>

int main(void) {
	printf_s("This program computes moduli.\n");
	printf_s("Enter an integer to serve as the second operand: ");
	int secOpe;
	scanf_s("%d", &secOpe);
	printf_s("Now enter the first operand: ");
	int firOpe;
	scanf_s("%d", &firOpe);
	while (firOpe > 0)
	{
		printf_s("%d %% %d is %d\n", firOpe, secOpe, firOpe % secOpe);
		printf_s("Enter next number for first operand (<= 0 to quit): ");
		scanf_s("%d", &firOpe);
	}
	printf_s("Done");

	getchar();
	getchar();
	return 0;
}