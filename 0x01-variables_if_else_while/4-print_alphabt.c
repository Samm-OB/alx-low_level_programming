#include <stdio.h>

/**
 * main - Entry point
 * print letters except e and q
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
