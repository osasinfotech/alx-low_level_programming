#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'A';
	char alpha = 'a';

	while (alphabet <= 'Z')
	{
		putchar(tolower(alphabet));
		alphabet++;
	}

	while (alpha <= 'a')
	{
		putchar(toupper(alpha));
		alpha++;
	}
	putchar('\n');

	return (0);
}
