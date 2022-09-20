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
	int len = strlen(str);
	int n = (len - 1) / 2;
	int temp;

	if (len % 2 == 0)
	{
		temp = str[len / 2];
		temp++;
	}
	else
	{
		putchar(len - n);
	}
}
