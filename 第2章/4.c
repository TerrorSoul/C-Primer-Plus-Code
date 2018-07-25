#include <stdio.h>

void jolly();
void deny();

int main(void) {
	jolly();
	jolly();
	jolly();
	deny();
	getchar();
	return 0;
}

void jolly() {
	printf_s("For he's a jolly good fellow!\n");
}

void deny() {
	printf_s("Which nobody can deny!");
}