#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 *
 */
void print_most_nubers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
		n = n + 1;
	}
	_putchar('\n');
}