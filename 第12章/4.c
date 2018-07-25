#include <stdio.h>

int call_time();

int main(void) {
	for (size_t i = 0; i < 10; i++)
	{
		printf_s("调用次数：%d\n", call_time());
	}

	getchar();
	return 0;
}

int call_time() {
	static int times = 0;
	return ++times;
}