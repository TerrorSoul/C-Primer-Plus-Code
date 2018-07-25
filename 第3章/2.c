#include <stdio.h>

int main(void) {
	printf_s("输入一个ASCII码值：");
	int i;
	scanf_s("%d", &i);
	char c = i;
	printf_s("输入的ASCII字符为：%c", c);

	getchar();
	getchar();
	return 0;
}