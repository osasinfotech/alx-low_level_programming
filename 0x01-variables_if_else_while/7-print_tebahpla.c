#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: always 0
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
