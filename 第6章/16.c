#include <stdio.h>

int main(void) {
	double dapInvest = 100, deiInvest = 100;
	int year = 0;
	while (deiInvest <= dapInvest) {
		++year;
		dapInvest += 10;
		deiInvest *= 1.05;
	}
	printf_s("需要%d年Deirdre的投资额才会超过Daphne\n", year);
	printf_s("Deirdre的投资额为%f，Daphne的投资额为%f", deiInvest, dapInvest);

	getchar();
	return 0;
}