#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: string
 *
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 || c <= 90)
		return (1);
	else
		return (0);
}
