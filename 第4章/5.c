#include <stdio.h>

int main(void) {
	float speed, size;
	printf_s("���������ٶȣ���λÿ�루Mb/s������");
	scanf_s("%f", &speed);
	printf_s("�����ļ���С�����ֽڣ�MB������");
	scanf_s("%f", &size);
	printf_s("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.", speed, size, size / speed * 8);

	getchar();
	getchar();
	return 0;
}