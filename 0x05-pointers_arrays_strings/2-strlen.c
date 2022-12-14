#include "main.h"

/**
 * _strlen - finds the length of string
 * @s: string
 *
 * Return: length as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
