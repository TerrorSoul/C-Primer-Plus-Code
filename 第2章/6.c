#include <stdio.h>
#include <math.h>

int main(void) {
	int toes = 10;
	printf_s("toes��ֵΪ��%d,��������Ϊ��%d,����ƽ��Ϊ��%d��",
		toes, 2 * toes, (int)pow(toes, 2));

	getchar();
	return 0;
}