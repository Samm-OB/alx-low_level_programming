#include <stdio.h>

/**
 * main - prints the number of arguments passed with new line
 *
 * @argv: vector argument
 * @argc: argument count
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[1]);
	(void)argv;
	return (0);
}
