#include <stdio.h>

int main(void) {
	printf_s("����һ��ASCII��ֵ��");
	int i;
	scanf_s("%d", &i);
	char c = i;
	printf_s("�����ASCII�ַ�Ϊ��%c", c);

	getchar();
	getchar();
	return 0;
}