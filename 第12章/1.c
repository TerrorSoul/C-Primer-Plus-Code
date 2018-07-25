#include <stdio.h>

void critic(int*);

int main(void) {
	int units = 0;

	printf_s("How many pounds to a firkin of butter?\n");
	scanf_s("%d", &units);
	while (units != 56) {
		critic(&units);
	}
	printf_s("You must have looked it up!\n");

	getchar();
	getchar();
	return 0;
}

void critic(int *units) {
	printf_s("No luck, my friend. Try again.\n");
	scanf_s("%d", units);
}