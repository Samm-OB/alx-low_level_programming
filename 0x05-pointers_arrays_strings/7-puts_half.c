#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int tem;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		for (tem = i; str[tem] != '\0'; i++)
		{
			_putchar(str[tem];)
		}
	}
	else
	{
		for (tem = ((i - 1) / 2) + 1; str[i] != '\0'; tem++)
		{
			_putchar(str[tem]);
		}
	}
	_putchar('\n');
}
