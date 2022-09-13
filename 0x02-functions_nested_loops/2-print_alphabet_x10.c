#include "main.h"
#include <ctype.h>

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	char alpha = 'A';
	int count = 0;

	while (count < 10)
	{
		while (alpha <= 'Z')
		{
			_putchar(tolower(alpha))
			alpha++;
		}
		count++;
		_putchar('\n');
	}
}
