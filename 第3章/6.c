#include <stdio.h>

int main(void) {
	printf_s("����ˮ�Ŀ�������");
	int i;
	scanf_s("%d", &i);
	printf_s("ˮ���ӵ�����Ϊ��%ld", i * 950 / (3.0e-23));

	getchar();
	getchar();
	return 0;
}