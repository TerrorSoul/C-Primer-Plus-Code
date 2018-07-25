#include <stdio.h>
#include "2.h"

int main(void) {
	int mode;

	printf_s("Enter 0 for metric mode, 1 for US mode: ");
	scanf_s("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf_s("Enter 0 for metric mode, 1 for US mode");
		printf_s(" (-1 to quit): ");
		scanf_s("%d", &mode);
	}
	printf_s("Done.\n");

	getchar();
	getchar();
	return 0;
}