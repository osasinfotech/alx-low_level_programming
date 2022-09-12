#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
