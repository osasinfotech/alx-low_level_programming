#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for uppercase character
 * @c: uppercase character
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
