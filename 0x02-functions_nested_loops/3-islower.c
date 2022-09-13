#include "main.h"
#include <ctype.h>

/**
 * _islower - function that checks for lowercase character
 * @c: character input
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
