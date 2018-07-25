#include <stdio.h>
#define petrol 3.785
#define distance 1.609

int main(void) {
	float p, d;
	printf_s("输入旅行的里程（英里）：");
	scanf_s("%f", &d);
	printf_s("输入消耗的汽油量（加仑）：");
	scanf_s("%f", &p);
	printf_s("%.1f英里/加仑\n", d / p);
	printf_s("%.1f升/100公里", (petrol * p * 100) / (distance * d));

	getchar();
	getchar();
	return 0;
}