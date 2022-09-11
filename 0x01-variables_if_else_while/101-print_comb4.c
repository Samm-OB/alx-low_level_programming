#include <stdio.h>

/**
 * main - Entry point
 * three digit combinations
 *
 * Return: always 0 success
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0' ; a <= '9' ; a++)
	{
		for (b = '1' ; b <= '9' ; b++)
		{
			for (c = '2' ; c <= '9' ; c++)
			{
				if (c > b && b > a)
				{
					putchar(a + '0');
					putchar(b + '0');
					putcahr(c + '0');
					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

