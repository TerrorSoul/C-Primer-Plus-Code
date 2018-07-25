#include <stdio.h>

#define base_salary 10.00
#define add_time 1.5
#define over_tax1 300 * 15 / 100
#define over_tax2 150 * 20 / 100

int main(void) {
	float time, salary, tax;
	printf_s("输入一周工作的小时数：");
	scanf_s("%f", &time);
	time = (time > 40) ? (40 + (time - 40) * add_time) : time;
	salary = time * base_salary;
	if (salary <= 300)
	{
		tax = salary * 15 / 100;
	}
	else if (salary <= 450)
	{
		tax = over_tax1 + (salary - 300) * 20 / 100;
	}
	else
	{
		tax = over_tax1 + over_tax2 + (salary - 450) * 25 / 100;
	}
	printf_s("工资总额为%.2f，税金为%.2f，净收入为%.2f", salary, tax, salary - tax);

	getchar();
	getchar();
	return 0;
}