#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: string
 *
 * Return: 0 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if (islower(c) || isupper(c))
		return (1);
	else
		return (0);
}
