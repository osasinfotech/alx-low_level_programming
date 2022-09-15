#include "main.h"

/**
 * times_table - function that print the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int n = 0, m = 0;

	while (n < 10)
	{
		while (m < 10)
		{
			m = m * n;

			if (m < 10)
			{
				_putchar(m);
				_putchar(',');
				_putchar(' ');
			}
			else if (m > 10)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
