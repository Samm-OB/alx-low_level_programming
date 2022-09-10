#include <stdio.h>

/**
 * main - Entry point
 * count in base 10 in a different code
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar("%i", b);
	}
	putchar("\n");
	return (0);
}
