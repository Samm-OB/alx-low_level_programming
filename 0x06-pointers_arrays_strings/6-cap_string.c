#include "main.h"

/**
 * cap_string -> capitalizes all words in string
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
			if ((b == 0 || a[b - 1] == spc[i]) && (a[b] >= 97 && a[b] <= 122))
			{
				a[b] = a[b] - 32;
			}
			i++;
		}
		b++;
	}
	return (a);
}
