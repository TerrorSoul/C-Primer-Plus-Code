#include <stdio.h>

int main(void) {
	int time;
	printf_s("���������");
	scanf_s("%d", &time);

	while (time > 0)
	{
		double sum1 = 0, sum2 = 0;
		for (int i = 1; i <= time; ++i)
		{
			sum1 += 1.0 / i;
			sum2 += (i % 2 == 1 ? 1 : -1) * 1.0 / i;
		}
		printf_s("����1���ܺ�Ϊ%f������2���ܺ�Ϊ%f\n", sum1, sum2);
		printf_s("�����������");
		scanf_s("%d", &time);
	}

	getchar();
	getchar();
	return 0;
}