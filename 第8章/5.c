#include <stdio.h>

int main(void) {
	char ch;
	int guess = 50, low = 1, up = 100;

	printf_s("Pick an integer from 1 to 100. I will try to guess ");
	printf_s("it.\nRespond with a y if my guess is right,\n");
	printf_s("with a l if it is too small and with an u if it is too large.\n");
	printf_s("Uh...is your number %d?\n", guess);
	while ((ch = getchar()) != 'y')
	{
		if (ch == 'l')
		{
			low = guess;
			guess = (guess + up) / 2;
			printf_s("Well, then, is it %d?\n", guess);
		}
		else if(ch == 'u')
		{
			up = guess;
			guess = (guess + low) / 2;
			printf_s("Well, then, is it %d?\n", guess);
		}
		else
		{
			printf_s("You can only enter y, l or u!\n");
		}
		while (getchar() != '\n')
		{
			continue;
		}
	}
	printf_s("I knew I could do it!\n");

	getchar();
	getchar();
	return 0;
}