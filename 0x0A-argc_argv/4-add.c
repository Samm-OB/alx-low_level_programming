#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds positive numbers with new line
 * if theres no int print 0 with new line
 * @argv: vector argument
 * @argc: arguments count
 * Return: 0 for sucess or 1 for fails
 */

int main(int argc, char *argv[])
{
	int s = 0, i;

	if (argc < 1)
	{
		for (i = 1; i < argc; i++)
		{
			int a;
			char *c;

			c = argv[i];
			for (a = 0; c[a] != '\0'; a++)
			{
				if (c[a] < 48 || c[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		s += atoi(argv[i]);
	}
		printf("%d\n", s);
		return (0);
}
