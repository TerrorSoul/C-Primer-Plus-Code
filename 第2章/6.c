#include <stdio.h>
#include <math.h>

int main(void) {
	int toes = 10;
	printf_s("toes的值为：%d,它的两倍为：%d,它的平方为：%d。",
		toes, 2 * toes, (int)pow(toes, 2));

	getchar();
	return 0;
}