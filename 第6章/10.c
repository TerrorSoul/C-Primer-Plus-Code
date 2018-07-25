#include <stdio.h>

int main(void) {
	int l, u;
	printf_s("Enter lower and upper integer limits: ");
	scanf_s("%d %d", &l, &u);
	while (l < u)
	{
		int sum = 0;
		for (int i = l; i <= u; i++)
		{
			sum += i * i;
		}
		printf_s("The sums of the squares from %d to %d is %d\n", l * l, u * u, sum);
		printf_s("Enter next set of limits: ");
		scanf_s("%d %d", &l, &u);
	}
	printf_s("Done");

	getchar();
	getchar();
	return 0;
}