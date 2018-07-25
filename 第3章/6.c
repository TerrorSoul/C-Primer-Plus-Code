#include <stdio.h>

int main(void) {
	printf_s("输入水的夸脱数：");
	int i;
	scanf_s("%d", &i);
	printf_s("水分子的数量为：%ld", i * 950 / (3.0e-23));

	getchar();
	getchar();
	return 0;
}