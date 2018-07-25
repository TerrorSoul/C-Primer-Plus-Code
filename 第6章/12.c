#include <stdio.h>

int main(void) {
	int time;
	printf_s("输入次数：");
	scanf_s("%d", &time);

	while (time > 0)
	{
		double sum1 = 0, sum2 = 0;
		for (int i = 1; i <= time; ++i)
		{
			sum1 += 1.0 / i;
			sum2 += (i % 2 == 1 ? 1 : -1) * 1.0 / i;
		}
		printf_s("序列1的总和为%f，序列2的总和为%f\n", sum1, sum2);
		printf_s("再输入次数：");
		scanf_s("%d", &time);
	}

	getchar();
	getchar();
	return 0;
}