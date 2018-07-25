#include <stdio.h>

int main(void) {
	char name[10];
	float height;
	printf_s("输入姓名：");
	scanf_s("%s", name, 9);
	printf_s("输入身高（厘米）：");
	scanf_s("%f", &height);
	printf_s("%s, you are %.3f meter tall", name, height / 100);

	getchar();
	getchar();
	return 0;
}