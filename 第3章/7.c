#include <stdio.h>

int main(void) {
	printf_s("输入身高（/英寸）：");
	float f;
	scanf_s("%f", &f);
	printf_s("身高：%f", f * 2.54);

	getchar();
	getchar();
	return 0;
}