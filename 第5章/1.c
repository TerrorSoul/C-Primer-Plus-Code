#include <stdio.h>
#define timetrans 60

int main(void) {
	printf_s("����һ��������");
	int i;
	scanf_s("%d", &i);
	while (i > 0)
	{
		printf_s("%d hours and %d minutes.\n", i / timetrans, i % timetrans);
		printf_s("����һ��������");
		scanf_s("%d", &i);
	}

	return 0;
}