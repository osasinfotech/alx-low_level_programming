#include "main.h"

/**
 * jack_bauer - function that print every minute of the day
 */
void jack_bauer(void)
{
	int min = 0, sec = 0;

	while (min < 24)
	{
		while (sec < 60)
		{
			_putchar((min / 10) + '0');
			_putchar ((min % 10) + '0');
			_putchar(':');
			_putchar ((sec / 10) + '0');
			_putchar ((sec % 10) + '0');
			_putchar ('\n');
			sec++;
		}
		min++;
	}
}

