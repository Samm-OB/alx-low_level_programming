#include <stdio.h>

/**
 * main - Entry  point
 * to list all alphabets
 *
 * Return: always success 0
 */

int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
