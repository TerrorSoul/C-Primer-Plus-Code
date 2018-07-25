#include <stdio.h>

int main(void) {
	printf_s("输入年龄：");
	int i;
	scanf_s("%d", &i);
	printf_s("该年龄对应的秒数：%e", 3.156e7 * i);

	getchar();
	getchar();
	return 0;
}