#include <stdio.h>

/**
 * main - a program that writes its name with new line
 * dont remove name before path
 *
 * @argv: vector argument
 * @argc: argument count
 * Return: 0 for success
 */

int main(int argc, char argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
