#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 *
 */
void more_numbers(void)
{
	char mn = 0;

	while (mn <= 14)
	{
		if (mn > 9)
		{
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
		}
		mn = mn + 1;
		_putchar('\n');
	}
}