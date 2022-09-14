#include "main.h"

/**
 * print_alphabet_x10 - printthe alphabets 10 times
 *
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	char b, c;

	for (b = 0; b <= 9; b++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
