#include <stdio.h>

int main(void) {
	int u, l;
	printf_s("����������ޣ�");
	scanf_s("%d", &u);
	printf_s("����������ޣ�");
	scanf_s("%d", &l);

	for (size_t i = l; i <= u; i++)
	{
		printf_s("%d %d %d\n", i, i * i, i * i * i);
	}

	getchar();
	getchar();
	return 0;
}