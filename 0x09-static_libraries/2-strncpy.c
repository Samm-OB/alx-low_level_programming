#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies string
 * @dest: destination
 * @src: source
 * @n: parameter
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
