#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character with new line
 * @str: string
 * Return: no error
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(*(str + i));
		}
		i++;
	}
}
