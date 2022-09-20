#include "main.h"
#include <stdio.h>

/**
 * _strcpy -copies and pastes a string
 * @dest: destination
 * @src: source
 * Return: return destination
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
