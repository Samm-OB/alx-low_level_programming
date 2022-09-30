#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string to check against
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (!accept[b])
		{
			break;
		}
	}
	return (a);
}
