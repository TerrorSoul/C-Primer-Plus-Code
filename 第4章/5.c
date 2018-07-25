#include <stdio.h>

int main(void) {
	float speed, size;
	printf_s("输入下载速度（兆位每秒（Mb/s））：");
	scanf_s("%f", &speed);
	printf_s("输入文件大小（兆字节（MB））：");
	scanf_s("%f", &size);
	printf_s("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.", speed, size, size / speed * 8);

	getchar();
	getchar();
	return 0;
}