#include <stdio.h>

/**
 * main - prints the number of arguments passed with new line
 *
 * @argv: vector argument
 * @argc: argument count
 * Return: 0 for success
 */

int main(int args, char *argv[])
{
	printf("%s\n", args - 1);
	(void)argv;
	return (0);
}
