#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prins a string in reverse
 * @s: reverse string
 * Return: no error
 */


void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		putchar(*(s + len));
	}
	putchar(10);
}
