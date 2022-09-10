#include <stdio.h>

/**
 * main  - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
  char c;
  int d;
  int long l;
  long long int li;
  float f;

  printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
  printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
  printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
  printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(li));
  printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

  return (0);
 }
		
