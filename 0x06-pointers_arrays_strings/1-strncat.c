#include "main.h"
#include <string.h>

/**
 * strncat - a function that concatenates 2 strings
 * @dest: destination
 * @src: source
 * @n: parameter
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
