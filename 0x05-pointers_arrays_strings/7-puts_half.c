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
	int n;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		for (tem = i; str[n] != '\0'; i++)
		{
			putchar(str[n]);
		}
	}
	else
	{
		for (n = ((i - 1) / 2) + 1; str[i] != '\0'; n++)
		{
			putchar(str[n]);
		}
	}
	putchar('\n');
}
