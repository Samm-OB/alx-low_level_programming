#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives including first one
 * one arg per line with new line
 * @argv: vector argument
 * @argc: argument count
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
