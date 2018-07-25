#include <stdio.h>

#define artichoke 2.05
#define beet 1.15
#define carrot 1.09

int main(void) {
	char ch;
	float a_pound = 0, b_pound = 0, c_pound = 0, pound, prices, discount, freight;
	printf_s("Enter a, b or c: ");
	scanf_s("%c", &ch, 1);
	do
	{
		switch (ch)
		{
		case 'a':
			printf_s("Enter the poundage of the artichoke you buy:");
			scanf_s("%f", &pound);
			a_pound += pound;
			break;
		case 'b':
			printf_s("Enter the poundage of the beet you buy:");
			scanf_s("%f", &pound);
			b_pound += pound;
			break;
		case 'c':
			printf_s("Enter the poundage of the carrot you buy:");
			scanf_s("%f", &pound);
			c_pound += pound;
			break;
		default:
			printf_s("You can only enter a, b or c!\n");
			break;
		}
		while ((ch = getchar()) != '\n')
		{
			continue;
		}
		printf_s("Enter a, b or c again, enter q to quit: ");
	} while (scanf_s("%c", &ch, 1) && ch != 'q');

	prices = a_pound * artichoke + b_pound * beet + c_pound * carrot;
	discount = (prices >= 100) ? prices * 0.05 : 0;
	pound = a_pound + b_pound + c_pound;
	if (pound <= 5)
	{
		freight = 6.5;
	}
	else if (pound <= 20)
	{
		freight = 14;
	}
	else
	{
		freight = 14 + (pound - 20) * 0.5;
	}

	printf_s("洋蓟售价为%.2f美元/磅，甜菜售价为%.2f美元/磅，胡萝卜售价为%.2f美元/磅\n", artichoke, beet, carrot);
	printf_s("洋蓟订购重量为%.2f磅，甜菜订购重量为%.2f磅，胡萝卜订购重量为%.2f磅，总重量为%.2f磅\n",
		a_pound, b_pound, c_pound, pound);
	printf_s("订购的蔬菜费用为%.2f美元\n", prices);
	printf_s("订单的总费用为%.2f美元\n", prices + freight);
	printf_s("折扣为%.2f美元\n", discount);
	printf_s("运费和包装费为%.2f美元\n", freight);
	printf_s("所有的费用总额为%.2f美元", prices + freight - discount);

	getchar();
	getchar();
	return 0;
}