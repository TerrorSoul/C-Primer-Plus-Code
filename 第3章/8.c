#include <stdio.h>

int main(void) {
	printf_s("���뱭����");
	float f;
	scanf_s("%f", &f);
	printf_s("�ȼ�������%fƷ��\n"
		"%f��˾\n"
		"%f����\n"
		"%f����", f / 2, f * 8, f * 8 * 2, f * 8 * 2 * 3);

	getchar();
	getchar();
	return 0;
}