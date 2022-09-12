#include <stdio.h>

/**
 * main - program
 *
 * return: always 0
 */
int main(void)
{
	int num1 = 0;
	int num2 = 1;

	while (num1 < 9)
	{
		while (num2 < 10)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

				if (num1 == 8 && num2 == 9)
					continue;
				putchar(',');
				putchar(' ');
				
				num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
