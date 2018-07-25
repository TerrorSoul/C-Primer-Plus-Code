#include <stdio.h>

void smile();

int main(void) {
	for (int i = 3; i > 0; --i) {
		for (int j = 0; j < i; ++j) {
			smile();
		}
		printf_s("\n");
	}

	getchar();
	return 0;
}

void smile() {
	printf_s("Smile!");
}