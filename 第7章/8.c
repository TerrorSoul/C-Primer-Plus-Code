#include <stdio.h>

#define add_time 1.5
#define over_tax1 300 * 15 / 100
#define over_tax2 150 * 20 / 100

int salary_rank();

int main(void) {
	float base_salarys[] = { 8.75, 9.33, 10.00, 11.20 };
	const int rank = salary_rank();
	const float base_salary = base_salarys[rank - 1];
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

int salary_rank() {
	char* salarys[] = { "$8.75/hr", "$9.33/hr", "$10.00/hr", "$11.20/hr" };
	for (size_t i = 0; i < 65; i++)
	{
		printf_s("*");
	}
	printf_s("\nEnter the number corresponding to the desired pay rate or action:\n");
	for (size_t i = 0; i < 4; i++)
	{
		printf_s("%zd) %-30s", i + 1, salarys[i]);
		if ((i + 1) % 2 == 0)
		{
			printf_s("\n");
		}
	}
	printf_s("5) quit\n");
	for (size_t i = 0; i < 65; i++)
	{
		printf_s("*");
	}
	int choice;
	printf_s("\nEnter your choice: ");
	scanf_s("%d", &choice);
	while (choice < 1 || choice > 4)
	{
		printf_s("Enter your choice again: ");
		scanf_s("%d", &choice);
	}
	return choice;
}