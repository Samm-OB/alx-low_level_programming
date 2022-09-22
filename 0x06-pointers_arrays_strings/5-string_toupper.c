#include "main.h"

/**
 * string_toupper - changes lowercase letters to iuppercase
 * @a: string parameter
 * Return: return string
 */

char *string_toupper(char *a)
{
	int b = 0;

	while (a[b])
	{
		if (a[b] >= 97 && a[b] <= 122)
		{
			a[b] = a[b] - 32;
		}
		b++;
	}
	return (a);
}
