#include <stdio.h>
#include "3.h"

int main(void) {
	int mode, old_mode = 0;

	printf_s("Enter 0 for metric mode, 1 for US mode: ");
	scanf_s("%d", &mode);
	while (mode >= 0)
	{
		double distance, fuel;
		mode = set_mode(mode, old_mode);
		old_mode = mode;
		get_info(mode, &distance, &fuel);
		show_info(mode, distance, fuel);
		printf_s("Enter 0 for metric mode, 1 for US mode");
		printf_s(" (-1 to quit): ");
		scanf_s("%d", &mode);
	}
	printf_s("Done.\n");

	getchar();
	getchar();
	return 0;
}