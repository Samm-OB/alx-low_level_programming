#include "main.h"

/**
 * _puts - prints a string with a new line
 * @str: string
 * Return: returns string
 */

void _puts(char *str)
{
	int i  = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
}
