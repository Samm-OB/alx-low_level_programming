#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words in string
 * @a: parameter
 * Return: string in capital letters
 */

char *cap_string(char *a)
{
	char spc[] = {32, 9, '\n', ',', ';', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int b = 0, i;

	while (a[b])
	{
		i = 0;
		while (i < len)
		{
			if (b == 0 || s[b -1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
			{
				s[a] = s[a] - 32;
			}
			i++;
		}
		b++;
	}
	return (a);
}
