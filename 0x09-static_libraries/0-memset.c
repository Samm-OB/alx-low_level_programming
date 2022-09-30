#include "main.h"

/**
 * _memset -writs a function that fills memory with a constant byte
 * @s: character
 * @b: character
 * @n: integer
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
