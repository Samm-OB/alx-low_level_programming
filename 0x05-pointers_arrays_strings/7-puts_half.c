#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len - 1) / 2;

	if (len % 2 == 0)
	{
		putchar(len - (len / 2);
	}
	else
	{
		putchar(len - n);
	}
	putchar(10);
}
