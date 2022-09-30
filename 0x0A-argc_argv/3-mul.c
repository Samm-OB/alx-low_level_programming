#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers with new line
 * @argv: arguments vector
 * @argc: arguments count
 * Return: 0 for success  or 1 for failure with new line
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
