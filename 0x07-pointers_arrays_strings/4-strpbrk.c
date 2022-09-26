#include "main.h"

/**
 * _strpbrk - searches for string of any set of bytes
 * @s: string
 * @accept: string  to check against
 * Return:  byte in s and matches to accept or  null if no match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				(s + a);
			}
		}
		if (accept[b])
		{
			break;
		}
	}
	return (0);
}
