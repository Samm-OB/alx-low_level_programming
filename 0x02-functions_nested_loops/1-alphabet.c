#include "main.h"

/**
 * print_alphabet - function to print alphabets
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
