#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	int num = '0';
	char alpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
