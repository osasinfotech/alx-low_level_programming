#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 *
 */
void more_numbers(void)
{
	char mn = 0, loop = 0;

	while (loop <= 9)
	{
		while (mn <= 14)
		{
			if (mn > 9)
			{
				_putchar(mn / 10 + '0');
				_putchar(mn % 10 + '0');
			}
			mn++;
		}
		_putchar('\n');
		loop++;
	}
}
