#include <stdio.h>

int main(void) {
	int d, even_sum = 0, even_num = 0, odd_sum = 0, odd_num = 0;
	while (scanf_s("%d", &d))
	{
		if (d == 0)
		{
			break;
		}
		else if (d % 2 == 0)
		{
			even_sum += d;
			++even_num;
		}
		else
		{
			odd_sum += d;
			++odd_num;
		}
	}
	printf_s("��%d��ż����ƽ��ֵΪ%.2f\n��%d��������ƽ��ֵΪ%.2f",
		even_num, (float)even_sum / even_num, odd_num, (float)odd_sum / odd_num);

	getchar();
	getchar();
	return 0;
}