#include <stdio.h>

/**
 * main - Entry point
 * count in hexadecimal
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char n;

	for (n = '0' ; n < '10' ; n++)
	{
		putchar(n);
	}
	for (n = 'a' ; n <= 'f' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
