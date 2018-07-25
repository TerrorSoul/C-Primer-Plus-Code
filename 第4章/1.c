#include <stdio.h>

int main(void) {
	char first_name[10];
	char last_name[10];

	printf_s(" ‰»Î√˚£∫");
	scanf_s("%s", first_name, 9);
	printf_s(" ‰»Î–’£∫");
	scanf_s("%s", last_name, 9);
	printf_s("%s,%s", first_name, last_name);

	getchar();
	getchar();
	return 0;
}