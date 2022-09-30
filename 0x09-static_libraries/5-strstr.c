#include "main.h"

/**
 * _strstr - locatesa substring
 * @haystack: string to check for needle
 * @needle: substring to check for haystack
 * Return: beginning of located substring or null if non is found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
			{
				b++;
			}
			else
			{
				break;
			}
		}
		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
		{
			return (haystack + a);
		}
	}
	return (0);
}
