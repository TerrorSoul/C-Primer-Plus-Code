#include <stdio.h>

int main(void) {
	int ch, num = 0;

	while ((ch = getchar()) != EOF)
	{
		++num;
	}
	printf_s("\n�ַ���Ϊ%d", num);

	getchar();
	return 0;
}