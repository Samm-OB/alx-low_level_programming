#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: index
 * Return: nothing
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

	if (size1 == NULL)
	{
		size1 = "";
	}
	if (size2  == NULL)
	{
		size2 = "";
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	if (n > size2)
	{
	n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));
	}
	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1]
	}
	p[i] = '\0';
	return (p);
}
