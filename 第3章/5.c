#include <stdio.h>

int main(void) {
	printf_s("�������䣺");
	int i;
	scanf_s("%d", &i);
	printf_s("�������Ӧ��������%e", 3.156e7 * i);

	getchar();
	getchar();
	return 0;
}