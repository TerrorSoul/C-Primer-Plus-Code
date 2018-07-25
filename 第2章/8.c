#include <stdio.h>

void one_three();

int main() {
	printf_s("starting now:\n");
	one_three();
	printf_s("done!");

	getchar();
	return 0;
}

void two() {
	printf_s("two\n");
}

void one_three() {
	printf_s("one\n");
	two();
	printf_s("three\n");
}