#include <stdio.h>
#include <ctype.h>

/**
 * Main - Entry 
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'A';

	while (alphabet <= 'Z')
	{
		putchar(tolower(alphabet));
		alphabet++;
	}
	putchar('\n');

	return (0);
}
