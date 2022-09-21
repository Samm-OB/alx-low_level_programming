#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates 2 strings
 * @dest: destination of concatenation
 * @src: source of concatenation
 * Return:  return a string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, 1;

	while (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	return (dest);
}
