#include <stdio.h>

/**
 * main - prints the number of arguments passed with new line
 * @args: argument count
 * @argv: argument vector
 * Return: 0 for success
 */

int main(int args, char *argv[])
{
	printf("%s\n", args - 1);
	(void)argv;
	return (0);
}
