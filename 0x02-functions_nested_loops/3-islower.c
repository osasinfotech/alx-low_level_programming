#include "main.h"
#include <ctype.h>

/**
 * _islower - function that checks for lowercase character
 * @c: c is string
 *
 * Returns 1 if c is lowercase
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
