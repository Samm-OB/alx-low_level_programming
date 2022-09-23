#include "main.h"
#include <string.h>

/**
 * _strcmp - function to compare strings
 * @s1: string one
 * @s2: string two
 * Return: 1(success)
 */
int _strcmp(char *s1, char *s2)
{
	char s1;
	char s2;
	int i = 0, c = 0;

	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			c++;
		}
		i++;
	}
	return (0);
}
