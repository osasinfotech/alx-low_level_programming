#include "main.h"
#include <ctype.h>

/**
 * _islower - function that checks for lowercase character
 * @c: c is string
 *
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 || c < 91)
		return (1);
	else
		return (0);
}
