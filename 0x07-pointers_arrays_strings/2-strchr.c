#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: c if charcter is found or null if not found
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; *(s + a); a++)
	{
		if (*(s + a) == c)
		{
			return (s + a);
		}
	}
	if (*(s + a) == c)
	{
		return (s + a);
	}
	return (0);
}
