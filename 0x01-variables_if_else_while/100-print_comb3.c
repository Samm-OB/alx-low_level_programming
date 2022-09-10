#include <stdio.h>

/**
 * main - Entry point
 * combinations of two digits
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int d;
	int e;

	for (d = '0' ; d <= '9' ; d++)
	{
		for (e = '0' ; e <= '9' ; e++)
		{
			if (d != e && d != '9')
			{
				if (e != d && e != '9')
				{
					putchar(d);
					putchar(e);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
