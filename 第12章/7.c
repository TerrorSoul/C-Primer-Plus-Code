#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

int main(void) {
	unsigned sets;
	unsigned sides, dice;

	srand((unsigned)time(0));
	printf_s("Enter the number of sets; enter q to stop: ");
	while (scanf_s("%u", &sets)) {
		printf_s("How many sides and how many dice? ");
		scanf_s("%u %u", &sides, &dice);
		for (size_t i = 0; i < sets; i++)
		{
			printf_s("%d ", roll_n_dice(dice, sides));
		}
		printf_s("\nHow many sets? Enter q to stop: ");
	}

	return 0;
}