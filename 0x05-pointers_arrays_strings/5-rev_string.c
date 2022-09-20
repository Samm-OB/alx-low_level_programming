#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: no error
 */

void rev_string(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		putchar(*(s + len));
	}
	return (len);
}
