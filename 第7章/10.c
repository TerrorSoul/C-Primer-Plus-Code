#include <stdio.h>

#define tax_rate1 0.15
#define tax_rate2 0.28

int salary_rank();

int main(void) {
	const float base_salarys[] = { 17850, 23900, 29750, 14875 };
	const int rank = salary_rank();
	const float base_salary = base_salarys[rank - 1];
	float salary, tax;
	printf_s("输入应纳税收入：");
	while (scanf_s("%f", &salary)) {
		tax = (salary > base_salary) ? (base_salary * tax_rate1 + (salary - base_salary) * tax_rate2) : salary * tax_rate1;
		printf_s("税金为%.2f", tax);
		printf_s("\n再次输入应纳税收入：");
	}

	getchar();
	getchar();
	return 0;
}

int salary_rank() {
	char* salarys[] = { "单身", "户主", "已婚，共有", "已婚，离异" };
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