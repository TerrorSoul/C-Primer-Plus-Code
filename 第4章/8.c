#include <stdio.h>
#define petrol 3.785
#define distance 1.609

int main(void) {
	float p, d;
	printf_s("�������е���̣�Ӣ���");
	scanf_s("%f", &d);
	printf_s("�������ĵ������������أ���");
	scanf_s("%f", &p);
	printf_s("%.1fӢ��/����\n", d / p);
	printf_s("%.1f��/100����", (petrol * p * 100) / (distance * d));

	getchar();
	getchar();
	return 0;
}