#include <stdio.h>

int main(void) {
	int friends = 5, week = 0;
	while (friends <= 150) {
		++week;
		friends = (friends - week) * 2;
		printf_s("��%d�ܵ�������Ϊ%d\n", week, friends);
	}

	getchar();
	return 0;
}