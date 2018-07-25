#include <stdio.h>

void br();
void ic();

int main(void) {
	br();
	printf_s(", ");
	ic();
	printf_s("\n");
	ic();
	printf_s(",\n");
	br();

	getchar();
	return 0;
}

void br() {
	printf_s("Brazil, Russia");
}

void ic() {
	printf_s("India, China");
}