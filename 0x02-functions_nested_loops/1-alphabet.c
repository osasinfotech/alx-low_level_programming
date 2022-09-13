#include "main.h"
#include <ctype.h>

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 *
 * Return: always 0
 */
void print_alphabet(void);
{
	char alpha = 'A';

	while (alpha <= 'Z')
	{
		_putchar(tolower(alpha));
		alpha++;
	}
	_putchar('\n');

	return (0);
}
