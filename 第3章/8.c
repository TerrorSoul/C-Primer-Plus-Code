#include <stdio.h>

int main(void) {
	printf_s("输入杯数：");
	float f;
	scanf_s("%f", &f);
	printf_s("等价容量：%f品脱\n"
		"%f盎司\n"
		"%f汤勺\n"
		"%f茶勺", f / 2, f * 8, f * 8 * 2, f * 8 * 2 * 3);

	getchar();
	getchar();
	return 0;
}