#include <stdio.h>

int main(void) {
	double dapInvest = 100, deiInvest = 100;
	int year = 0;
	while (deiInvest <= dapInvest) {
		++year;
		dapInvest += 10;
		deiInvest *= 1.05;
	}
	printf_s("��Ҫ%d��Deirdre��Ͷ�ʶ�Żᳬ��Daphne\n", year);
	printf_s("Deirdre��Ͷ�ʶ�Ϊ%f��Daphne��Ͷ�ʶ�Ϊ%f", deiInvest, dapInvest);

	getchar();
	return 0;
}