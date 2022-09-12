#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit
 *
 * Retrun: alway 0
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');

	return (0);
}
