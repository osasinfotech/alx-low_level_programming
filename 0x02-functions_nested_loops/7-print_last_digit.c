#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 *@n: integer number
 * Return: last
 */
int print_last_digit(int n)
{
	int last;

	last = (n % 10);

	if (n < 0)
	{
		n = (n * -1);
	}

	_putchar(n + '0');
	return (last);
}
