#include <stdio.h>
#include <stddef.h>

#define add_time 1.5
#define over_tax1 300 * 15 / 100
#define over_tax2 150 * 20 / 100

int salary_rank(void);
float get_num(char *);
float get_no_zero_num(char *);

int main(void) {
	char rank;
	float fnum, snum;
	while ((rank = salary_rank()) != 'q')
	{
		switch (rank)
		{
		case 'a':
			fnum = get_num("first");
			snum = get_num("second");
			printf_s("%.1f + %.1f = %.1f\n", fnum, snum, fnum + snum);
			break;
		case 's':
			fnum = get_num("first");
			snum = get_num("second");
			printf_s("%.1f - %.1f = %.1f\n", fnum, snum, fnum - snum);
			break;
		case 'm':
			fnum = get_num("first");
			snum = get_num("second");
			printf_s("%.1f * %.1f = %.1f\n", fnum, snum, fnum * snum);
			break;
		case 'd':
			fnum = get_num("first");
			snum = get_no_zero_num("second");
			printf_s("%.1f / %.1f = %.1f\n", fnum, snum, fnum / snum);
			break;
		default:
			return 0;
		}
	}
	
	printf_s("Bye.");
	getchar();
	return 0;
}

int salary_rank(void) {
	char* salarys[] = { "a. add", "s. subtract", "m. multiply", "d. divide" };
	printf_s("Enter the operation of your choice:\n");
	for (size_t i = 0; i < 4; i++)
	{
		printf_s("%-30s", salarys[i]);
		if ((i + 1) % 2 == 0)
		{
			printf_s("\n");
		}
	}
	printf_s("q. quit\n");
	char choice;
	while (scanf_s("%c", &choice, 1))
	{
		while (getchar() != '\n')
		{
			continue;
		}
		switch (choice)
		{
		case 'a':
		case 's':
		case 'm':
		case 'd':
		case 'q':
			return choice;
		default:
			printf_s("Enter your choice again: ");
			break;
		}
	}
}

float get_num(char *str) {
	float num;
	printf_s("Enter %s number: ", str);
	scanf_s("%f", &num);
	while (getchar() != '\n')
	{
		continue;
	}
	return num;
}
float get_no_zero_num(char *str) {
	float num;
	printf_s("Enter %s number: ", str);
	while (scanf_s("%f", &num)) {
		if (num - 0 < 0.000001)
		{
			printf_s("Enter a number other than 0:");
		}
		else
		{
			break;
		}
	}
	while (getchar() != '\n')
	{
		continue;
	}
	return num;
}