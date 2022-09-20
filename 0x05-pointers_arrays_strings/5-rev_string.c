#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: no error
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	int temp;

	for (i = 0 ; i < len / 2 ; i++)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len - i - 1] = temp;
	}
}
